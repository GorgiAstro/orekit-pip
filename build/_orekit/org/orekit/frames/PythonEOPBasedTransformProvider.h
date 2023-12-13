#ifndef org_orekit_frames_PythonEOPBasedTransformProvider_H
#define org_orekit_frames_PythonEOPBasedTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class EOPBasedTransformProvider;
      class Transform;
      class EOPHistory;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getEOPHistory_f9d30be358d43685,
          mid_getNonInterpolatingProvider_8b3864a3bd1af1da,
          mid_getTransform_976d4bc81671ce42,
          mid_getTransform_7a8ca6856fe3fc9e,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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
