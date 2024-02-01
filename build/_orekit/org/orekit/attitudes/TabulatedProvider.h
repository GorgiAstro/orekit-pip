#ifndef org_orekit_attitudes_TabulatedProvider_H
#define org_orekit_attitudes_TabulatedProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
      class AttitudeBuilder;
      class FieldAttitude;
      class Attitude;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class AngularDerivativesFilter;
      class TimeStampedAngularCoordinates;
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
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class TabulatedProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f21769abc337991f,
          mid_init$_506090b585892db8,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitude_a02177519e1b6a45,
          mid_getMaxDate_80e11148db499dda,
          mid_getMinDate_80e11148db499dda,
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
