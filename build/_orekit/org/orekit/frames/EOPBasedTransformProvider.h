#ifndef org_orekit_frames_EOPBasedTransformProvider_H
#define org_orekit_frames_EOPBasedTransformProvider_H

#include "org/orekit/frames/TransformProvider.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPBasedTransformProvider;
      class EOPHistory;
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

      class EOPBasedTransformProvider : public ::org::orekit::frames::TransformProvider {
       public:
        enum {
          mid_getEOPHistory_f9d30be358d43685,
          mid_getNonInterpolatingProvider_8b3864a3bd1af1da,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EOPBasedTransformProvider(jobject obj) : ::org::orekit::frames::TransformProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EOPBasedTransformProvider(const EOPBasedTransformProvider& obj) : ::org::orekit::frames::TransformProvider(obj) {}

        ::org::orekit::frames::EOPHistory getEOPHistory() const;
        EOPBasedTransformProvider getNonInterpolatingProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EOPBasedTransformProvider);
      extern PyTypeObject *PY_TYPE(EOPBasedTransformProvider);

      class t_EOPBasedTransformProvider {
      public:
        PyObject_HEAD
        EOPBasedTransformProvider object;
        static PyObject *wrap_Object(const EOPBasedTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
