#ifndef org_orekit_utils_IERSConventions_H
#define org_orekit_utils_IERSConventions_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace utils {
      class LoveNumbers;
      class IERSConventions;
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScalarFunction;
      class TimeVectorFunction;
      class TimeScales;
      class TimeScale;
    }
    namespace data {
      class PoissonSeries$CompiledSeries;
      class FundamentalNutationArguments;
    }
    namespace frames {
      class EOPHistory;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class IERSConventions : public ::java::lang::Enum {
       public:
        enum {
          mid_evaluateTC_209f08246d708042,
          mid_evaluateTC_cf010978f3c5a913,
          mid_evaluateTC_bbe0b057411e7e27,
          mid_evaluateTC_277c7bbd90f0a124,
          mid_getEOPTidalCorrection_d0fbc44798d116db,
          mid_getEOPTidalCorrection_f828c350c2e39525,
          mid_getEarthOrientationAngleFunction_499ded7cb53db9bd,
          mid_getEarthOrientationAngleFunction_affc6cc1169889dd,
          mid_getGASTFunction_8b64e041a5e0388e,
          mid_getGASTFunction_1626b3d2726f4d1e,
          mid_getGMSTFunction_499ded7cb53db9bd,
          mid_getGMSTFunction_d77fa2ba48456639,
          mid_getGMSTRateFunction_499ded7cb53db9bd,
          mid_getGMSTRateFunction_d77fa2ba48456639,
          mid_getLoveNumbers_4076340cb4c36742,
          mid_getMeanObliquityFunction_852c4d611f1539e1,
          mid_getMeanObliquityFunction_86b1207feab51856,
          mid_getNominalTidalDisplacement_be783177b060994b,
          mid_getNutationArguments_00942b6d25526230,
          mid_getNutationArguments_3e424896261f205c,
          mid_getNutationCorrectionConverter_55a099913f3c39f3,
          mid_getNutationCorrectionConverter_a4c3846c69ac5e93,
          mid_getNutationFunction_d0fbc44798d116db,
          mid_getNutationFunction_f828c350c2e39525,
          mid_getNutationReferenceEpoch_80e11148db499dda,
          mid_getNutationReferenceEpoch_86a997abceb04f2f,
          mid_getOceanPoleTide_767e6a3ea53f5e8d,
          mid_getPermanentTide_9981f74b2d109da6,
          mid_getPrecessionFunction_d0fbc44798d116db,
          mid_getPrecessionFunction_f828c350c2e39525,
          mid_getSolidPoleTide_767e6a3ea53f5e8d,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_72d427a453e47630,
          mid_getTidalDisplacementFrequencyCorrectionZonal_72d427a453e47630,
          mid_getTideFrequencyDependenceFunction_c1b86ad8a5d13d9a,
          mid_getTideFrequencyDependenceFunction_a4c6028f6347cda2,
          mid_getXYSpXY2Function_d0fbc44798d116db,
          mid_getXYSpXY2Function_f828c350c2e39525,
          mid_valueOf_b3af8c2e23e77c76,
          mid_values_6bc294c95c1c1e26,
          mid_getNutationArguments_f94597bf31ed7b30,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_abe88ad790ab75ad,
          mid_getTidalDisplacementFrequencyCorrectionZonal_abe88ad790ab75ad,
          mid_loadLoveNumbers_21063114c4eb1f07,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IERSConventions(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IERSConventions(const IERSConventions& obj) : ::java::lang::Enum(obj) {}

        static IERSConventions *IERS_1996;
        static IERSConventions *IERS_2003;
        static IERSConventions *IERS_2010;

        jdouble evaluateTC(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement evaluateTC(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble evaluateTC(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScales &) const;
        ::org::hipparchus::CalculusFieldElement evaluateTC(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getEOPTidalCorrection() const;
        ::org::orekit::time::TimeVectorFunction getEOPTidalCorrection(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGASTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::time::TimeScalarFunction getGASTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::EOPHistory &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTRateFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTRateFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::utils::LoveNumbers getLoveNumbers() const;
        ::org::orekit::time::TimeScalarFunction getMeanObliquityFunction() const;
        ::org::orekit::time::TimeScalarFunction getMeanObliquityFunction(const ::org::orekit::time::TimeScales &) const;
        JArray< jdouble > getNominalTidalDisplacement() const;
        ::org::orekit::data::FundamentalNutationArguments getNutationArguments(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::data::FundamentalNutationArguments getNutationArguments(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter getNutationCorrectionConverter() const;
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter getNutationCorrectionConverter(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getNutationFunction() const;
        ::org::orekit::time::TimeVectorFunction getNutationFunction(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::AbsoluteDate getNutationReferenceEpoch() const;
        ::org::orekit::time::AbsoluteDate getNutationReferenceEpoch(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getOceanPoleTide(const ::org::orekit::frames::EOPHistory &) const;
        jdouble getPermanentTide() const;
        ::org::orekit::time::TimeVectorFunction getPrecessionFunction() const;
        ::org::orekit::time::TimeVectorFunction getPrecessionFunction(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getSolidPoleTide(const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::data::PoissonSeries$CompiledSeries getTidalDisplacementFrequencyCorrectionDiurnal() const;
        ::org::orekit::data::PoissonSeries$CompiledSeries getTidalDisplacementFrequencyCorrectionZonal() const;
        ::org::orekit::time::TimeVectorFunction getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeVectorFunction getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getXYSpXY2Function() const;
        ::org::orekit::time::TimeVectorFunction getXYSpXY2Function(const ::org::orekit::time::TimeScales &) const;
        static IERSConventions valueOf(const ::java::lang::String &);
        static JArray< IERSConventions > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(IERSConventions);
      extern PyTypeObject *PY_TYPE(IERSConventions);

      class t_IERSConventions {
      public:
        PyObject_HEAD
        IERSConventions object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_IERSConventions *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const IERSConventions&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const IERSConventions&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
