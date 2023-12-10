#ifndef org_orekit_frames_PythonEOPBasedTransformProvider_H
#define org_orekit_frames_PythonEOPBasedTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class FieldTransform;
      class EOPBasedTransformProvider;
      class Transform;
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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getEOPHistory_a75a6d9d92c81a5e,
          mid_getNonInterpolatingProvider_8ac98ab37841bf77,
          mid_getTransform_687985c59478d29c,
          mid_getTransform_f7bf3269025b86c3,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
