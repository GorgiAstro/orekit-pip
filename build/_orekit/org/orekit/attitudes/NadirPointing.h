#ifndef org_orekit_attitudes_NadirPointing_H
#define org_orekit_attitudes_NadirPointing_H

#include "org/orekit/attitudes/GroundPointing.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class TimeStampedPVCoordinates;
      class PVCoordinatesProvider;
      class TimeStampedFieldPVCoordinates;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace attitudes {

      class NadirPointing : public ::org::orekit::attitudes::GroundPointing {
       public:
        enum {
          mid_init$_4230f72e1ec009db,
          mid_getTargetPV_19719ebf0495cd86,
          mid_getTargetPV_11bfbaf3cce3e66c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit NadirPointing(jobject obj) : ::org::orekit::attitudes::GroundPointing(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        NadirPointing(const NadirPointing& obj) : ::org::orekit::attitudes::GroundPointing(obj) {}

        NadirPointing(const ::org::orekit::frames::Frame &, const ::org::orekit::bodies::BodyShape &);

        ::org::orekit::utils::TimeStampedPVCoordinates getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace attitudes {
      extern PyType_Def PY_TYPE_DEF(NadirPointing);
      extern PyTypeObject *PY_TYPE(NadirPointing);

      class t_NadirPointing {
      public:
        PyObject_HEAD
        NadirPointing object;
        static PyObject *wrap_Object(const NadirPointing&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
