#ifndef org_orekit_frames_TransformProviderUtils_H
#define org_orekit_frames_TransformProviderUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class TransformProviderUtils : public ::java::lang::Object {
       public:
        enum {
          mid_getCombinedProvider_93c2b051a765abc6,
          mid_getReversedProvider_d3a07aaf2d4db810,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TransformProviderUtils(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TransformProviderUtils(const TransformProviderUtils& obj) : ::java::lang::Object(obj) {}

        static ::org::orekit::frames::TransformProvider *IDENTITY_PROVIDER;

        static ::org::orekit::frames::TransformProvider getCombinedProvider(const ::org::orekit::frames::TransformProvider &, const ::org::orekit::frames::TransformProvider &);
        static ::org::orekit::frames::TransformProvider getReversedProvider(const ::org::orekit::frames::TransformProvider &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(TransformProviderUtils);
      extern PyTypeObject *PY_TYPE(TransformProviderUtils);

      class t_TransformProviderUtils {
      public:
        PyObject_HEAD
        TransformProviderUtils object;
        static PyObject *wrap_Object(const TransformProviderUtils&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
