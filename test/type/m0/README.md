# M0 Type-Checker Spec Tests

This directory contains spec-first tests for the 0.6 type-checker architecture freeze.

- `active`: behavior that should already pass on current baseline.
- `pending`: required 0.6 behavior not fully implemented yet.
- Resolver-owned structural validation cases are tracked under
  `test/type/resolver/` instead of this manifest.

Some `active` cases are runtime baseline checks (for example unhandled `throw`),
kept here to pin current control-flow semantics while type-check rules evolve.

Run only active cases:

```bash
./test/type/m0/run-spec.sh
```

Run active + pending cases:

```bash
./test/type/m0/run-spec.sh --include-pending
```

The manifest format is:

`status|expected|path|description`
