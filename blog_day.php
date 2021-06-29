<?php

$time = gmmktime(0, 0, 0, 12, 5, 2020); //博客诞生时间

if (time() < $time) { //时间错误提示

    echo "Error";
} else {

    $day = intval((time() - $time) / 86400);
    //天数=(当前时间-过去时间)/86400秒
    $result = $day . "天";

    echo "博客已运行：";
    echo $result;
}

?>