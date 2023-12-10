#ifndef org_orekit_attitudes_TabulatedLofOffset_H
#define org_orekit_attitudes_TabulatedLofOffset_H

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
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
      class PVCoordinatesProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace attitudes {
      class Attitude;
      class FieldAttitude;
      class BoundedAttitudeProvider;
    }
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class TabulatedLofOffset : public ::java::lang::Object {
       public:
        enum {
          mid_init$_24c7aef3047138c4,
          mid_init$_b38f64f0bbbd8f11,
          mid_getAttitude_4e541876ea7d5bd0,
          mid_getAttitude_d2b70935d932b5c5,
          mid_getMaxDate_85703d13e302437e,
          mid_getMinDate_85703d13e302437e,
          mid_getTable_2afa36052df4765d,
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
