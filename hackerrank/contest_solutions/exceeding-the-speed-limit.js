'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function solve(s) {
    let fine = 0;
    let  warning = "No punishment";
    
    if ( s > 90  ) {
        fine = s - 90;
        if ( s > 110 ) {
            fine *= 500;
            warning = "License removed";
        } else {
            fine *= 300;
            warning = "Warning";
        }
    }
    console.log(fine + " " + warning);

}

function main() {
    const s = parseInt(readLine().trim(), 10);

    solve(s);
}