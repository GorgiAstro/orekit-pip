#ifndef org_orekit_frames_L1TransformProvider_H
#define org_orekit_frames_L1TransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class TransformProvider;
      class FieldTransform;
      class Transform;
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
          mid_init$_628ee7a3e714b75c,
          mid_getStaticTransform_edee248bbd22a723,
          mid_getStaticTransform_eae0db96fe973887,
          mid_getTransform_687985c59478d29c,
          mid_getTransform_f7bf3269025b86c3,
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
