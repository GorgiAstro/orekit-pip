#ifndef org_orekit_utils_PythonExtendedPVCoordinatesProvider_H
#define org_orekit_utils_PythonExtendedPVCoordinatesProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class PythonExtendedPVCoordinatesProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
