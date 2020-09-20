<?php
global $fact;
$fact = array(1,2, 6, 24, 120,720,5040,40320,362880,3628800,39916800,479001600);

function solve($numbers, $k, $N){
	global $fact;
	$permNum = "";
	$remain = $k - 1;
	$str = "abcdefghijklm";
	for ($i = 1; $i < $N; $i++) {
	    $j = $remain / $fact[$N - 1 - $i];
	    $remain %= $fact[$N - 1 - $i];
	    $permNum .= $str[$numbers[$j]];
	    array_splice($numbers, $j, 1);
	    if($remain == 0) break;
	}
	 
	for ($i = 0; $i < count($numbers); $i++) {
	    $permNum .= $str[$numbers[$i]];
	}
	return $permNum;
}

function ithPermutation($k){
	$len = 13;
    $p = array(0,1,2,3,4,5,6,7,8,9,10,11,12);
	return solve($p, $k, $len);
}

fscanf(STDIN, "%d\n", $t);
while($t--){
    fscanf(STDIN, "%d\n", $n);
    echo ithPermutation($n) . "\n";
}
?>