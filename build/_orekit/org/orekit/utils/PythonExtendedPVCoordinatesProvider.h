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
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class ExtendedPVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
