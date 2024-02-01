#ifndef org_orekit_frames_PythonEOPBasedTransformProvider_H
#define org_orekit_frames_PythonEOPBasedTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPBasedTransformProvider;
      class FieldTransform;
      class Transform;
      class EOPHistory;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
    namespace frames {

      class PythonEOPBasedTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getEOPHistory_867110817f590882,
          mid_getNonInterpolatingProvider_9030f9dc3158fc42,
          mid_getTransform_02ca17ac51b6a4b2,
          mid_getTransform_286745ef54e0a7f6,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonEOPBasedTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonEOPBasedTransformProvider(const PythonEOPBasedTransformProvider& obj) : ::java::lang::Object(obj) {}

        PythonEOPBasedTransformProvider();

        void finalize() const;
        ::org::orekit::frames::EOPHistory getEOPHistory() const;
        ::org::orekit::frames::EOPBasedTransformProvider getNonInterpolatingProvider() const;
        ::org::orekit::frames::Transform getTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
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
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonEOPBasedTransformProvider);
      extern PyTypeObject *PY_TYPE(PythonEOPBasedTransformProvider);

      class t_PythonEOPBasedTransformProvider {
      public:
        PyObject_HEAD
        PythonEOPBasedTransformProvider object;
        static PyObject *wrap_Object(const PythonEOPBasedTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
