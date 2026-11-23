# Data Structures in C++

A collection of C++ implementations of classic data structures and probabilistic data structures.

The repository contains standalone examples focused on implementation details and core operations.

## Implementations

| File | Data structure | Operations / features |
|---|---|---|
| `bst.cpp` | Binary Search Tree (BST) | Insertion, search, deletion, inorder / preorder / postorder traversal |
| `btree.cpp` | B-tree | Insertion, search, deletion, inorder traversal |
| `btree1.cpp` | Generic B-tree (key-value) | Templated node structure, key-value storage, search and inorder traversal; implementation is currently incomplete |
| `hashtable.cpp` | Hash Table | Separate chaining, insertion, search, removal, updating an existing key |
| `trie.cpp` | Trie (prefix tree) | String insertion, exact-key search, removal |
| `bloom_filter.cpp` | Bloom Filter | Probabilistic membership testing with multiple hash functions |
| `count-min_sketch.cpp` | Count-Min Sketch | Approximate frequency estimation using multiple hash functions |

## Build and run

Each `.cpp` file is a separate program with its own `main()` function. Compile and run one implementation at a time.

For example, with g++:

```bash
g++ -std=c++17 bst.cpp -o bst
./bst
```

Replace `bst.cpp` and `bst` with the file and executable name you want to run.

## Notes

- The examples are implemented without external libraries; they use the C++ standard library.
- The Bloom Filter can return false positives, but a correctly configured filter does not return false negatives for inserted elements.
- Count-Min Sketch provides approximate frequency estimates and may overestimate counts because of hash collisions.
- `btree1.cpp` is an unfinished generic key-value B-tree implementation and is included as a work in progress.
