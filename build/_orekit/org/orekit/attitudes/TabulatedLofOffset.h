#ifndef org_orekit_attitudes_TabulatedLofOffset_H
#define org_orekit_attitudes_TabulatedLofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class BoundedAttitudeProvider;
    }
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinatesProvider;
      class AngularDerivativesFilter;
      class FieldPVCoordinatesProvider;
      class TimeStampedAngularCoordinates;
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

      class TabulatedLofOffset : public ::java::lang::Object {
       public:
        enum {
          mid_init$_534040e366b4b0a7,
          mid_init$_b2ac97ad3b8624a2,
          mid_getAttitude_77e3383de01f3e48,
          mid_getAttitude_1306ac39e1d2de3f,
          mid_getMaxDate_7a97f7e149e79afb,
          mid_getMinDate_7a97f7e149e79afb,
          mid_getTable_0d9551367f7ecdef,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TabulatedLofOffset(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TabulatedLofOffset(const TabulatedLofOffset& obj) : ::java::lang::Object(obj) {}

        TabulatedLofOffset(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &, const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &);
        TabulatedLofOffset(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::LOF &, const ::java::util::List &, jint, const ::org::orekit::utils::AngularDerivativesFilter &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &);

        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
        ::java::util::List getTable() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(TabulatedLofOffset);
      extern PyTypeObject *PY_TYPE(TabulatedLofOffset);

      class t_TabulatedLofOffset {
      public:
        PyObject_HEAD
        TabulatedLofOffset object;
        static PyObject *wrap_Object(const TabulatedLofOffset&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
