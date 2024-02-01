#ifndef org_orekit_utils_ExtendedPVCoordinatesProviderAdapter_H
#define org_orekit_utils_ExtendedPVCoordinatesProviderAdapter_H

#include "org/orekit/frames/Frame.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class ExtendedPVCoordinatesProviderAdapter : public ::org::orekit::frames::Frame {
       public:
        enum {
          mid_init$_d6acaee40f40e579,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ExtendedPVCoordinatesProviderAdapter(jobject obj) : ::org::orekit::frames::Frame(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ExtendedPVCoordinatesProviderAdapter(const ExtendedPVCoordinatesProviderAdapter& obj) : ::org::orekit::frames::Frame(obj) {}

        ExtendedPVCoordinatesProviderAdapter(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::java::lang::String &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(ExtendedPVCoordinatesProviderAdapter);
      extern PyTypeObject *PY_TYPE(ExtendedPVCoordinatesProviderAdapter);

      class t_ExtendedPVCoordinatesProviderAdapter {
      public:
        PyObject_HEAD
        ExtendedPVCoordinatesProviderAdapter object;
        static PyObject *wrap_Object(const ExtendedPVCoordinatesProviderAdapter&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
