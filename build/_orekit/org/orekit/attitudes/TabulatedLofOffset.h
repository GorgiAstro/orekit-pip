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
      class Attitude;
    }
    namespace frames {
      class LOF;
      class Frame;
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
          mid_init$_2876403b42e11bdd,
          mid_init$_0a429198a7f4db2d,
          mid_getAttitude_21845cfb0034fe1c,
          mid_getAttitude_896ee4d68989b1e8,
          mid_getMaxDate_c325492395d89b24,
          mid_getMinDate_c325492395d89b24,
          mid_getTable_e62d3bb06d56d7e3,
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

        ::org::orekit::attitudes::Attitude getAttitude(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::attitudes::FieldAttitude getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
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
