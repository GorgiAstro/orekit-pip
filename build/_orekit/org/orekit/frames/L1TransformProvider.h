#ifndef org_orekit_frames_L1TransformProvider_H
#define org_orekit_frames_L1TransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
    namespace frames {
      class FieldStaticTransform;
      class StaticTransform;
      class TransformProvider;
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

      class L1TransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_43ec4ee4a0809dae,
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

        explicit L1TransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        L1TransformProvider(const L1TransformProvider& obj) : ::java::lang::Object(obj) {}

        L1TransformProvider(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &);

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
      extern PyType_Def PY_TYPE_DEF(L1TransformProvider);
      extern PyTypeObject *PY_TYPE(L1TransformProvider);

      class t_L1TransformProvider {
      public:
        PyObject_HEAD
        L1TransformProvider object;
        static PyObject *wrap_Object(const L1TransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
