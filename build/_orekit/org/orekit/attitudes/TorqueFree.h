#ifndef org_orekit_attitudes_TorqueFree_H
#define org_orekit_attitudes_TorqueFree_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace attitudes {
      class FieldAttitude;
      class Inertia;
      class AttitudeProvider;
      class Attitude;
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
          mid_init$_92784335c590ffe3,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getInertia_0c35e3e78a73a076,
          mid_getInitialAttitude_ed1eef73b5133690,
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
