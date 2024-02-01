#ifndef org_orekit_utils_FieldAbsolutePVCoordinates_H
#define org_orekit_utils_FieldAbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AbsolutePVCoordinates;
      class FieldPVCoordinates;
      class FieldPVCoordinatesProvider;
      class FieldAbsolutePVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
        }
      }
    }
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

      class FieldAbsolutePVCoordinates : public ::org::orekit::utils::TimeStampedFieldPVCoordinates {
       public:
        enum {
          mid_init$_52100c6847eaec19,
          mid_init$_a21a3f679d555370,
          mid_init$_2a0b4cce78661178,
          mid_init$_d473bf44c6f0ba81,
          mid_init$_908dc2ce6b1cd1a1,
          mid_init$_78bcd70fff2e0c4a,
          mid_init$_8e6f8770f80ed059,
          mid_init$_a1f4328f7f5e607a,
          mid_init$_0e5092b170a8b3e9,
          mid_init$_acdc2ed2e333ac4b,
          mid_getFrame_cb151471db4570f0,
          mid_getPVCoordinates_be698fa91827b9b2,
          mid_getPVCoordinates_cb22ebaaad002a3b,
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_getPosition_04c84225ba0acc81,
          mid_shiftedBy_7d8eb4c884905d3b,
          mid_shiftedBy_98193c33f95d3c3c,
          mid_toAbsolutePVCoordinates_0bbeea3cc786f34b,
          mid_toTaylorProvider_ed886b943b6de8d9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAbsolutePVCoordinates(jobject obj) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAbsolutePVCoordinates(const FieldAbsolutePVCoordinates& obj) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(obj) {}

        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::utils::TimeStampedFieldPVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const FieldAbsolutePVCoordinates &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::utils::FieldPVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);
        FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &, const ::org::hipparchus::CalculusFieldElement &, const FieldAbsolutePVCoordinates &);

        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::frames::Frame &) const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getPosition(const ::org::orekit::frames::Frame &) const;
        FieldAbsolutePVCoordinates shiftedBy(jdouble) const;
        FieldAbsolutePVCoordinates shiftedBy(const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::utils::AbsolutePVCoordinates toAbsolutePVCoordinates() const;
        ::org::orekit::utils::FieldPVCoordinatesProvider toTaylorProvider() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(FieldAbsolutePVCoordinates);
      extern PyTypeObject *PY_TYPE(FieldAbsolutePVCoordinates);

      class t_FieldAbsolutePVCoordinates {
      public:
        PyObject_HEAD
        FieldAbsolutePVCoordinates object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAbsolutePVCoordinates *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAbsolutePVCoordinates&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAbsolutePVCoordinates&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
