#ifndef org_orekit_attitudes_TabulatedProvider_H
#define org_orekit_attitudes_TabulatedProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class AngularDerivativesFilter;
    }
    namespace attitudes {
      class FieldAttitude;
      class BoundedAttitudeProvider;
      class AttitudeBuilder;
      class Attitude;
    }
    namespace frames {
      class Frame;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class TabulatedProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_27d82222e71f7d6a,
          mid_init$_64e2df2033784a10,
          mid_getAttitude_896ee4d68989b1e8,
          mid_getAttitude_21845cfb0034fe1c,
          mid_getMaxDate_c325492395d89b24,
          mid_getMinDate_c325492395d89b24,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TabulatedProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TabulatedProvider(const TabulatedProvider& obj) : ::java::lang::Object(obj) {}

        TabulatedProvider(const ::org::orekit::frames::Frame &, const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &);
        TabulatedProvider(const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::attitudes::AttitudeBuilder &);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(TabulatedProvider);
      extern PyTypeObject *PY_TYPE(TabulatedProvider);

      class t_TabulatedProvider {
      public:
        PyObject_HEAD
        TabulatedProvider object;
        static PyObject *wrap_Object(const TabulatedProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
