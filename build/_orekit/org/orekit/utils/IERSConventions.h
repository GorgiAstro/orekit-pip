#ifndef org_orekit_utils_IERSConventions_H
#define org_orekit_utils_IERSConventions_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeScales;
      class TimeScale;
      class TimeScalarFunction;
      class TimeVectorFunction;
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class LoveNumbers;
      class IERSConventions;
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace data {
      class FundamentalNutationArguments;
      class PoissonSeries$CompiledSeries;
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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace utils {

      class IERSConventions : public ::java::lang::Enum {
       public:
        enum {
          mid_evaluateTC_e912d21057defe63,
          mid_evaluateTC_7bc0fd76ee915b72,
          mid_evaluateTC_17bf48af24dfef09,
          mid_evaluateTC_bc063b16b915a564,
          mid_getEOPTidalCorrection_517fcc39f9cc5470,
          mid_getEOPTidalCorrection_48fddb0445ecc692,
          mid_getEarthOrientationAngleFunction_dc8f95e72a3d91ea,
          mid_getEarthOrientationAngleFunction_89d14378b2e28177,
          mid_getGASTFunction_a0b56ad5e5ca7148,
          mid_getGASTFunction_d4e3fb2734ed2bda,
          mid_getGMSTFunction_dc8f95e72a3d91ea,
          mid_getGMSTFunction_0059b7a8a529e189,
          mid_getGMSTRateFunction_dc8f95e72a3d91ea,
          mid_getGMSTRateFunction_0059b7a8a529e189,
          mid_getLoveNumbers_8236eb0356aea921,
          mid_getMeanObliquityFunction_d512c53f0a914e4f,
          mid_getMeanObliquityFunction_62a961e76cf2f17a,
          mid_getNominalTidalDisplacement_7cdc325af0834901,
          mid_getNutationArguments_61f4c415c3db8105,
          mid_getNutationArguments_fd263cc728d6fb92,
          mid_getNutationCorrectionConverter_4c6face5636e3d4a,
          mid_getNutationCorrectionConverter_2480988cc7996db7,
          mid_getNutationFunction_517fcc39f9cc5470,
          mid_getNutationFunction_48fddb0445ecc692,
          mid_getNutationReferenceEpoch_aaa854c403487cf3,
          mid_getNutationReferenceEpoch_414ef8773aff1bd2,
          mid_getOceanPoleTide_476d63253d6fd69c,
          mid_getPermanentTide_456d9a2f64d6b28d,
          mid_getPrecessionFunction_517fcc39f9cc5470,
          mid_getPrecessionFunction_48fddb0445ecc692,
          mid_getSolidPoleTide_476d63253d6fd69c,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_a3f1c3aca67dc2a0,
          mid_getTidalDisplacementFrequencyCorrectionZonal_a3f1c3aca67dc2a0,
          mid_getTideFrequencyDependenceFunction_cd10273d71e8ce50,
          mid_getTideFrequencyDependenceFunction_719fa2ce27a0e006,
          mid_getXYSpXY2Function_517fcc39f9cc5470,
          mid_getXYSpXY2Function_48fddb0445ecc692,
          mid_valueOf_a16f7dd2af41e577,
          mid_values_6e6c41cbe00dc887,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_2408b0911c403501,
          mid_getTidalDisplacementFrequencyCorrectionZonal_2408b0911c403501,
          mid_loadLoveNumbers_ad4c10e285e8b403,
          mid_getNutationArguments_6249450fdd4b5eca,
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
