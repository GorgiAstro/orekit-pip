#ifndef org_orekit_attitudes_TabulatedLofOffset_H
#define org_orekit_attitudes_TabulatedLofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
      class Attitude;
      class FieldAttitude;
    }
    namespace frames {
      class Frame;
      class LOF;
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

      class TabulatedLofOffset : public ::java::lang::Object {
       public:
        enum {
          mid_init$_6e02fb16dd7a6ff1,
          mid_init$_2b1f5df11f43165a,
          mid_getAttitude_455b5c75f9292826,
          mid_getAttitude_5341a8481841f90c,
          mid_getMaxDate_aaa854c403487cf3,
          mid_getMinDate_aaa854c403487cf3,
          mid_getTable_a6156df500549a58,
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
