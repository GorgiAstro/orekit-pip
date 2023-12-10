#ifndef org_orekit_frames_HelmertTransformation_H
#define org_orekit_frames_HelmertTransformation_H

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

      class HelmertTransformation : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8555f4eafee7cf0a,
          mid_getEpoch_85703d13e302437e,
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

        explicit HelmertTransformation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HelmertTransformation(const HelmertTransformation& obj) : ::java::lang::Object(obj) {}

        HelmertTransformation(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

        ::org::orekit::time::AbsoluteDate getEpoch() const;
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
      extern PyType_Def PY_TYPE_DEF(HelmertTransformation);
      extern PyTypeObject *PY_TYPE(HelmertTransformation);

      class t_HelmertTransformation {
      public:
        PyObject_HEAD
        HelmertTransformation object;
        static PyObject *wrap_Object(const HelmertTransformation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
