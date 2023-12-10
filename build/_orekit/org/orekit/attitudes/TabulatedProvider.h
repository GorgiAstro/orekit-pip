#ifndef org_orekit_attitudes_TabulatedProvider_H
#define org_orekit_attitudes_TabulatedProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
      class Attitude;
      class FieldAttitude;
      class AttitudeBuilder;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
          mid_init$_fb10df4e1e73d3c8,
          mid_init$_7b1b4115612078ea,
          mid_getAttitude_5341a8481841f90c,
          mid_getAttitude_455b5c75f9292826,
          mid_getMaxDate_aaa854c403487cf3,
          mid_getMinDate_aaa854c403487cf3,
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

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
