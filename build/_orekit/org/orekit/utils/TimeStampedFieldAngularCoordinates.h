#ifndef org_orekit_utils_TimeStampedFieldAngularCoordinates_H
#define org_orekit_utils_TimeStampedFieldAngularCoordinates_H

#include "org/orekit/utils/FieldAngularCoordinates.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class TimeStampedFieldAngularCoordinates;
      class TimeStampedAngularCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
      class FieldTimeStamped;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldRotation;
          class FieldVector3D;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
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
    namespace utils {

      class TimeStampedFieldAngularCoordinates : public ::org::orekit::utils::FieldAngularCoordinates {
       public:
        enum {
          mid_init$_f8b481461ea8ab39,
          mid_init$_61cf0823ade6dd93,
          mid_init$_52727332bd6be5b2,
          mid_init$_1a460667376305ef,
          mid_init$_145a04a9f1c56fe2,
          mid_init$_c1c3e02e01cb1f0e,
          mid_addOffset_a34ef7d1f116941c,
          mid_getDate_fa23a4301b9c83e7,
          mid_revert_508aa3ee9876a7be,
          mid_shiftedBy_420699eb39f86905,
          mid_shiftedBy_a6ca19a27632ab4d,
          mid_subtractOffset_a34ef7d1f116941c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit TimeStampedFieldAngularCoordinates(jobject obj) : ::org::orekit::utils::FieldAngularCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        TimeStampedFieldAngularCoordinates(const TimeStampedFieldAngularCoordinates& obj) : ::org::orekit::utils::FieldAngularCoordinates(obj) {}

        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &);
        TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field &, const ::org::orekit::utils::TimeStampedAngularCoordinates &);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, jdouble);
        TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, const ::org::orekit::utils::FieldPVCoordinates &, jdouble);

        TimeStampedFieldAngularCoordinates addOffset(const ::org::orekit::utils::FieldAngularCoordinates &) const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        TimeStampedFieldAngularCoordinates revert() const;
        TimeStampedFieldAngularCoordinates shiftedBy(jdouble) const;
        TimeStampedFieldAngularCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        TimeStampedFieldAngularCoordinates subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(TimeStampedFieldAngularCoordinates);
      extern PyTypeObject *PY_TYPE(TimeStampedFieldAngularCoordinates);

      class t_TimeStampedFieldAngularCoordinates {
      public:
        PyObject_HEAD
        TimeStampedFieldAngularCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_TimeStampedFieldAngularCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const TimeStampedFieldAngularCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const TimeStampedFieldAngularCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
