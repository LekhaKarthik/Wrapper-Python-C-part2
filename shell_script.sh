echo "............script started............"
Summ=$(python py_add.py $1 $2)
echo "Sum from shell script: $Summ"
exit $Summ
