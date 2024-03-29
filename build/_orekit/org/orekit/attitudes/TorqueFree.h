#ifndef org_orekit_attitudes_TorqueFree_H
#define org_orekit_attitudes_TorqueFree_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
      class Inertia;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class PVCoordinatesProvider;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
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
          mid_init$_1a2ba29dfab02e0d,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitude_a02177519e1b6a45,
          mid_getInertia_355dbe403ed36c8e,
          mid_getInitialAttitude_83f44b5ac6431edc,
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
