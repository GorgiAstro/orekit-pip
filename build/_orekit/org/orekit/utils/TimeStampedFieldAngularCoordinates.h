#ifndef org_orekit_utils_TimeStampedFieldAngularCoordinates_H
#define org_orekit_utils_TimeStampedFieldAngularCoordinates_H

#include "org/orekit/utils/FieldAngularCoordinates.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class Field;
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldTimeStamped;
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class TimeStampedFieldAngularCoordinates;
      class FieldPVCoordinates;
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
          mid_init$_7d09f2d0faf56c24,
          mid_init$_676022eb1673e53e,
          mid_init$_87a6951a5af3d263,
          mid_init$_69ea71c8c9a32ba2,
          mid_init$_4abaeb2757df3c22,
          mid_init$_92038f93efa6e128,
          mid_addOffset_b876eda6b0934506,
          mid_getDate_1fea28374011eef5,
          mid_revert_3c739ea1aa8f99e1,
          mid_shiftedBy_3e397c1726400ba8,
          mid_shiftedBy_356565215fd243d9,
          mid_subtractOffset_b876eda6b0934506,
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
