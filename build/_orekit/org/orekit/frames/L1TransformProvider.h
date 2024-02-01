#ifndef org_orekit_frames_L1TransformProvider_H
#define org_orekit_frames_L1TransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Transform;
      class TransformProvider;
      class StaticTransform;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace bodies {
      class CelestialBody;
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
          mid_init$_6a627f83556e9294,
          mid_getStaticTransform_6e492420312934f1,
          mid_getStaticTransform_3b5ee2ab7cc035a5,
          mid_getTransform_02ca17ac51b6a4b2,
          mid_getTransform_286745ef54e0a7f6,
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
