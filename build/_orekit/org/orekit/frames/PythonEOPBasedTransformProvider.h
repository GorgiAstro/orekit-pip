#ifndef org_orekit_frames_PythonEOPBasedTransformProvider_H
#define org_orekit_frames_PythonEOPBasedTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class EOPBasedTransformProvider;
      class FieldTransform;
      class Transform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getEOPHistory_1266c6198e5d43dd,
          mid_getNonInterpolatingProvider_4e3921e6b145757e,
          mid_getTransform_d55545a64ea4a9a7,
          mid_getTransform_0b4f24249033b631,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
