#ifndef org_orekit_utils_PythonExtendedPVCoordinatesProvider_H
#define org_orekit_utils_PythonExtendedPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class ExtendedPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonExtendedPVCoordinatesProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_getPVCoordinates_4ac52e75113a03db,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonExtendedPVCoordinatesProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonExtendedPVCoordinatesProvider(const PythonExtendedPVCoordinatesProvider& obj) : ::java::lang::Object(obj) {}

        PythonExtendedPVCoordinatesProvider();

        void finalize() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(PythonExtendedPVCoordinatesProvider);
      extern PyTypeObject *PY_TYPE(PythonExtendedPVCoordinatesProvider);

      class t_PythonExtendedPVCoordinatesProvider {
      public:
        PyObject_HEAD
        PythonExtendedPVCoordinatesProvider object;
        static PyObject *wrap_Object(const PythonExtendedPVCoordinatesProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
