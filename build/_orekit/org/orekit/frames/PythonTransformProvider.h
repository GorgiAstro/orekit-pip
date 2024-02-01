#ifndef org_orekit_frames_PythonTransformProvider_H
#define org_orekit_frames_PythonTransformProvider_H

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
      class FieldTransform;
      class Transform;
      class TransformProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
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

        explicit PythonTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonTransformProvider(const PythonTransformProvider& obj) : ::java::lang::Object(obj) {}

        PythonTransformProvider();

        void finalize() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonTransformProvider);
      extern PyTypeObject *PY_TYPE(PythonTransformProvider);

      class t_PythonTransformProvider {
      public:
        PyObject_HEAD
        PythonTransformProvider object;
        static PyObject *wrap_Object(const PythonTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
