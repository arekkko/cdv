using System;
using System.Collections.Generic;
using System.Text;

namespace Zadanie3
{
    class Matrix
    {
        private int[,] table;
        private int rowsCount = 0;
        private int columnsCount = 0;

        public Matrix(string fileLocation)
        {
            table = this.readMatrixFromFile(fileLocation);
        }

        
        public Matrix(int[,] _table)
        {
            table = _table;
            this.RowsCount = _table.GetLength(0);
            this.ColumnsCount = _table.GetLength(1);
        }
 
        private int[,] readMatrixFromFile(string file)
        {
            string[] lines = System.IO.File.ReadAllLines(file);

            //Parse ASCII value to int
            this.RowsCount = int.Parse(lines[0][0].ToString());
            this.ColumnsCount = int.Parse(lines[0][2].ToString());

            int[,] table = new int[this.RowsCount, this.ColumnsCount];

            for (int i=1, j=0; i<lines.Length; i++, j++)
            {
                for(int k=0, g=0; k < this.ColumnsCount; k++, g+=2)
                {
                    table[j, k] = int.Parse(lines[i][g].ToString());
                }
            }

            return table;
        }

        public void transposition()
        {
            int[,] resultTable = new int[this.ColumnsCount, this.RowsCount];
            
            for(int i = 0; i < this.ColumnsCount; i++)
            {
                for(int j=0; j < RowsCount; j++)
                {
                    resultTable[i, j] = table[j, i];
                }
            }
            int temp = this.ColumnsCount;
            this.ColumnsCount = this.RowsCount;
            this.RowsCount = temp; 

            table = resultTable;
        }

        public static Matrix operator +(Matrix m1, Matrix m2)
        {
            if (m1.RowsCount != m2.RowsCount || m1.ColumnsCount != m2.ColumnsCount)
                throw new ArgumentException("Matrixs are not in the same size.");

            int[,] resultTable = new int[m1.RowsCount, m1.ColumnsCount];

            for (int i = 0; i < m1.RowsCount; i++)
            {
                for (int j = 0; j < m1.ColumnsCount; j++)
                {
                    resultTable[i, j] = m1.table[i, j] + m2.table[i, j];
                }
            }

            return new Matrix(resultTable);
        }

        public static Matrix operator -(Matrix m1, Matrix m2)
        {
            if (m1.RowsCount != m2.RowsCount || m1.ColumnsCount != m2.ColumnsCount)
                throw new ArgumentException("Matrixs are not in the same size.");

            int[,] resultTable = new int[m1.RowsCount, m1.ColumnsCount];

            for (int i = 0; i < m1.RowsCount; i++)
            {
                for (int j = 0; j < m1.ColumnsCount; j++)
                {
                    resultTable[i, j] = m1.table[i, j] - m2.table[i, j];
                }
            }

            return new Matrix(resultTable);
        }

        public static Matrix operator *(Matrix m1, Matrix m2)
        {
            if (m1.RowsCount != m2.RowsCount || m1.ColumnsCount != m2.ColumnsCount)
                throw new ArgumentException("Matrixs are not in the same size. This case is not supported.");

            int[,] resultTable = new int[m1.RowsCount, m1.ColumnsCount];

            for (int i = 0; i < m1.RowsCount; i++)
            {
                for (int j = 0; j < m1.ColumnsCount; j++)
                {
                    int sum = 0;
                    for(int k=0; k<m2.rowsCount; k++)
                    {
                        sum += m1.table[i, j] * m2.table[k, j];
                    }
                    resultTable[i, j] = sum;
                }
            }

            return new Matrix(resultTable);
        }


        public void print()
        {
            for (int i = 0; i < this.RowsCount; i++)
            {
                for (int j = 0; j < this.ColumnsCount; j++)
                {
                    string separator = ", ";
                    if (j == this.ColumnsCount - 1)
                        separator = "";

                    Console.Write(table[i, j] + separator);
                }
                Console.Write("\n");
            }
        }

        /*
         * Getters and setters section 
        */
        private int RowsCount
        {
            set { rowsCount = value; }
            get { return rowsCount; }
        }
        private int ColumnsCount
        {
            set { columnsCount = value; }
            get { return columnsCount; }
        }
    }
}
