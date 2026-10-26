# Experiment 15: File Organization Schemes for Single-Level and Two-Level Directory

## Aim
To implement single-level and two-level directory schemes and calculate the worst-case number of file-name comparisons.

## Description
This experiment models an esports server with 4 teams, each storing 250 files.

- **Single-Level Directory:** All files are stored in one directory. The worst-case comparison count is `4 × 250 = 1000`.
- **Two-Level Directory:** A master directory contains one directory per team. Under the manual's assumed linear-search model, the worst-case comparison count is `4 + 250 = 254`.

## Compile and Run
```bash
gcc dir.c -o dir
./dir
```

## Expected Output
```text
Experiment 15: File Organization Schemes

Single-Level Directory
Esports teams: 4
Total files: 1000
Worst case: 1000 comparisons

Two-Level Directory
Esports teams: 4
Files per team: 250
Worst case: 254 comparisons
```

## Observation
A single-level directory is simple but requires globally unique file names and may need up to 1000 comparisons. A two-level directory separates each team's files, permits the same filename in different team directories, and requires up to 254 comparisons under the comparison model used in the manual.

## Output Image
The file `experiment15_manual_output.png` contains the original single-level directory output screenshot extracted from the supplied lab manual. The two-level output area in the manual is a blank placeholder.
