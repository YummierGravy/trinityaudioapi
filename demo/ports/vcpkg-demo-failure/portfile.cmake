vcpkg_execute_required_process(
    COMMAND "${CMAKE_COMMAND}" -P "${CMAKE_CURRENT_LIST_DIR}/fail.cmake"
    WORKING_DIRECTORY "${CURRENT_BUILDTREES_DIR}"
    LOGNAME demo-failure-${TARGET_TRIPLET}
)
