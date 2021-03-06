///////////////////////////////////////////////////////////////////////
NOTE TO WRITERS:
These CLI examples can be customized as necessary.
///////////////////////////////////////////////////////////////////////

1.  Change to directory `<TS_HOME>`.
2.  Start JavaTest using the following command:
+
--
[source,oac_no_warn]
----
ant run
----
--

[[GCMCU]]

Example 5-1 {TechnologyShortName} TCK Signature Tests

To run the {TechnologyShortName} TCK signature tests, enter the
following commands:

[source,subs="attributes"]
----
cd {sigTestDirectoryExample}
ant -Dtests=SignatureTest.html run
----

[[GCMBV]]


Example 5-2 Single Test Directory

To run a single test directory, enter the following commands:

[source,subs="attributes"]
----
ant -Dtests={singleTestDirectoryExample} run
----

[[GCMCA]]


Example 5-3 Subset of Test Directories

To run a subset of test directories, enter the following commands:

[source,subs="attributes"]
----
ant -Dtests={subsetTestDirectoryExample} run
----
