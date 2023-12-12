#ifndef org_orekit_attitudes_FixedRate_H
#define org_orekit_attitudes_FixedRate_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class AttitudeProvider;
      class FieldAttitude;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
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

      class FixedRate : public ::java::lang::Object {
       public:
        enum {
          mid_init$_59f7a5a3efbf6514,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getAttitude_77e3383de01f3e48,
          mid_getReferenceAttitude_ed1eef73b5133690,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FixedRate(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FixedRate(const FixedRate& obj) : ::java::lang::Object(obj) {}

        FixedRate(const ::org::orekit::attitudes::Attitude &);

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getReferenceAttitude() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(FixedRate);
      extern PyTypeObject *PY_TYPE(FixedRate);

      class t_FixedRate {
      public:
        PyObject_HEAD
        FixedRate object;
        static PyObject *wrap_Object(const FixedRate&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
