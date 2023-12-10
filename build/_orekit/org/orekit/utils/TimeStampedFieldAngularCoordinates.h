#ifndef org_orekit_utils_TimeStampedFieldAngularCoordinates_H
#define org_orekit_utils_TimeStampedFieldAngularCoordinates_H

#include "org/orekit/utils/FieldAngularCoordinates.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeStampedAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
      class FieldPVCoordinates;
    }
    namespace time {
      class FieldTimeStamped;
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
    namespace utils {

      class TimeStampedFieldAngularCoordinates : public ::org::orekit::utils::FieldAngularCoordinates {
       public:
        enum {
          mid_init$_b65ab84bb47d00a7,
          mid_init$_57465d89f578decb,
          mid_init$_d1b59cac8bab6322,
          mid_init$_b615b416f90b473e,
          mid_init$_7074573958993f96,
          mid_init$_3b247e4eb3f721c9,
          mid_addOffset_7ec0bea5c02f6519,
          mid_getDate_51da00d5b8a3b5df,
          mid_revert_d8696322b912d5fd,
          mid_shiftedBy_7e28b13c041efa8b,
          mid_shiftedBy_093b9606e7549330,
          mid_subtractOffset_7ec0bea5c02f6519,
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
