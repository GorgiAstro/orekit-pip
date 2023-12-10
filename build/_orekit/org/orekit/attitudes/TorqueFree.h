#ifndef org_orekit_attitudes_TorqueFree_H
#define org_orekit_attitudes_TorqueFree_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class AttitudeProvider;
      class Inertia;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
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
    namespace attitudes {

      class TorqueFree : public ::java::lang::Object {
       public:
        enum {
          mid_init$_928f9caae3df060e,
          mid_getAttitude_4e541876ea7d5bd0,
          mid_getAttitude_d2b70935d932b5c5,
          mid_getInertia_abcaa399dcf67539,
          mid_getInitialAttitude_bd12f6f74bd44dca,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TorqueFree(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TorqueFree(const TorqueFree& obj) : ::java::lang::Object(obj) {}

        TorqueFree(const ::org::orekit::attitudes::Attitude &, const ::org::orekit::attitudes::Inertia &);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Inertia getInertia() const;
        ::org::orekit::attitudes::Attitude getInitialAttitude() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(TorqueFree);
      extern PyTypeObject *PY_TYPE(TorqueFree);

      class t_TorqueFree {
      public:
        PyObject_HEAD
        TorqueFree object;
        static PyObject *wrap_Object(const TorqueFree&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
