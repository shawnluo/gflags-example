workspace(name = "com_github_gflags_example")

git_repository(
    name   = "com_github_gflags_gflags",
    tag    = "v2.2.0",
    #commit = "f8a0efe03aa69b3336d8e228b37d4ccb17324b88",
    remote = "https://github.com/gflags/gflags.git"
)

bind(
    name   = "gflags",
    actual = "@com_github_gflags_gflags//:gflags",
)

bind(
    name   = "gflags_nothreads",
    actual = "@com_github_gflags_gflags//:gflags_nothreads",
)
