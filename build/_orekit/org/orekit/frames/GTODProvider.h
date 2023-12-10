#ifndef org_orekit_frames_GTODProvider_H
#define org_orekit_frames_GTODProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class GTODProvider;
      class FieldStaticTransform;
      class EOPBasedTransformProvider;
      class StaticTransform;
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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class GTODProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getEOPHistory_1266c6198e5d43dd,
          mid_getNonInterpolatingProvider_7ee1c1efd2bd5e08,
          mid_getStaticTransform_96493aacdf1acda1,
          mid_getStaticTransform_490485462b5938a0,
          mid_getTransform_d55545a64ea4a9a7,
          mid_getTransform_0b4f24249033b631,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit GTODProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GTODProvider(const GTODProvider& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::frames::EOPHistory getEOPHistory() const;
        GTODProvider getNonInterpolatingProvider() const;
        ::org::orekit::frames::StaticTransform getStaticTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::frames::Transform getTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(GTODProvider);
      extern PyTypeObject *PY_TYPE(GTODProvider);

      class t_GTODProvider {
      public:
        PyObject_HEAD
        GTODProvider object;
        static PyObject *wrap_Object(const GTODProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
