#ifndef org_orekit_utils_FieldAbsolutePVCoordinates_H
#define org_orekit_utils_FieldAbsolutePVCoordinates_H

#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
      class AbsolutePVCoordinates;
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
          mid_init$_3c9a81ca81006017,
          mid_init$_aa8c722bf91af587,
          mid_init$_d709f1a99e8f728c,
          mid_init$_dbb5cbfe1e0f7743,
          mid_init$_ec297e7d63958cff,
          mid_init$_a579737bd7b3a2fc,
          mid_init$_cc8c6789cd732e7b,
          mid_init$_0c532ebd3e17863c,
          mid_init$_a82918c7573e9c77,
          mid_init$_803de8b4e87e6ba6,
          mid_getFrame_2c51111cc6894ba1,
          mid_getPVCoordinates_243debd9cc1dd623,
          mid_getPVCoordinates_dda5a3346286675e,
          mid_getPVCoordinates_294c5c99690f2356,
          mid_getPosition_566ff18e6be34b64,
          mid_shiftedBy_6ce2d639ee84cd5a,
          mid_shiftedBy_4eea64d82cd4330d,
          mid_toAbsolutePVCoordinates_900ea521fabf17ca,
          mid_toTaylorProvider_0d134b6a2504033c,
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
