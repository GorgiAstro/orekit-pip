#ifndef org_orekit_attitudes_TabulatedLofOffset_H
#define org_orekit_attitudes_TabulatedLofOffset_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class BoundedAttitudeProvider;
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
      class LOF;
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

      class TabulatedLofOffset : public ::java::lang::Object {
       public:
        enum {
          mid_init$_86d238ce985844ab,
          mid_init$_416ded54ccbb07fd,
          mid_getAttitude_aab1c6ab68ffdcbb,
          mid_getAttitude_a02177519e1b6a45,
          mid_getMaxDate_80e11148db499dda,
          mid_getMinDate_80e11148db499dda,
          mid_getTable_d751c1a57012b438,
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
