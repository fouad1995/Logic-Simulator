
#ifndef LogicSimulator_EXPORT_H
#define LogicSimulator_EXPORT_H

#ifdef LogicSimulator_BUILT_AS_STATIC
#  define LogicSimulator_EXPORT
#  define LOGICSIMULATOR_NO_EXPORT
#else
#  ifndef LogicSimulator_EXPORT
#    ifdef LogicSimulator_EXPORTS
        /* We are building this library */
#      define LogicSimulator_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define LogicSimulator_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef LOGICSIMULATOR_NO_EXPORT
#    define LOGICSIMULATOR_NO_EXPORT 
#  endif
#endif

#ifndef LOGICSIMULATOR_DEPRECATED
#  define LOGICSIMULATOR_DEPRECATED __declspec(deprecated)
#endif

#ifndef LOGICSIMULATOR_DEPRECATED_EXPORT
#  define LOGICSIMULATOR_DEPRECATED_EXPORT LogicSimulator_EXPORT LOGICSIMULATOR_DEPRECATED
#endif

#ifndef LOGICSIMULATOR_DEPRECATED_NO_EXPORT
#  define LOGICSIMULATOR_DEPRECATED_NO_EXPORT LOGICSIMULATOR_NO_EXPORT LOGICSIMULATOR_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef LOGICSIMULATOR_NO_DEPRECATED
#    define LOGICSIMULATOR_NO_DEPRECATED
#  endif
#endif

#endif /* LogicSimulator_EXPORT_H */
