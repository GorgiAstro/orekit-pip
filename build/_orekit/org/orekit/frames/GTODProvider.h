#ifndef org_orekit_frames_GTODProvider_H
#define org_orekit_frames_GTODProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class EOPHistory;
      class FieldTransform;
      class EOPBasedTransformProvider;
      class Transform;
      class GTODProvider;
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

      class GTODProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getEOPHistory_a75a6d9d92c81a5e,
          mid_getNonInterpolatingProvider_2f9fdd7f938bed2f,
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
