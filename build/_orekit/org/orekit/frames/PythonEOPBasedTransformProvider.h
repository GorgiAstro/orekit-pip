#ifndef org_orekit_frames_PythonEOPBasedTransformProvider_H
#define org_orekit_frames_PythonEOPBasedTransformProvider_H

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
      class Transform;
      class EOPBasedTransformProvider;
      class FieldTransform;
      class EOPHistory;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonEOPBasedTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getEOPHistory_9a64cc378cf7ab6b,
          mid_getNonInterpolatingProvider_6eea5bc11bda953b,
          mid_getTransform_df04e3927954349e,
          mid_getTransform_e70631ba002d9a32,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
