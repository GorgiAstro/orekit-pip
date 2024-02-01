#ifndef org_hipparchus_linear_RealVector_H
#define org_hipparchus_linear_RealVector_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
    }
    namespace linear {
      class RealVectorChangingVisitor;
      class RealVector$Entry;
      class RealVectorPreservingVisitor;
      class RealMatrix;
      class RealVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVector : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_add_bf8d75e459632544,
          mid_addToEntry_4320462275d66e78,
          mid_append_bf8d75e459632544,
          mid_append_2fd46ead8ae05f47,
          mid_combine_7bd6dbc1df2b3199,
          mid_combineToSelf_7bd6dbc1df2b3199,
          mid_copy_92d7e8d8d3f1dfcf,
          mid_cosine_510dfb60b80a1bc5,
          mid_dotProduct_510dfb60b80a1bc5,
          mid_ebeDivide_bf8d75e459632544,
          mid_ebeMultiply_bf8d75e459632544,
          mid_equals_72faff9b05f5ed5e,
          mid_getDimension_d6ab429752e7c267,
          mid_getDistance_510dfb60b80a1bc5,
          mid_getEntry_ce4c02d583456bc9,
          mid_getL1Distance_510dfb60b80a1bc5,
          mid_getL1Norm_9981f74b2d109da6,
          mid_getLInfDistance_510dfb60b80a1bc5,
          mid_getLInfNorm_9981f74b2d109da6,
          mid_getMaxIndex_d6ab429752e7c267,
          mid_getMaxValue_9981f74b2d109da6,
          mid_getMinIndex_d6ab429752e7c267,
          mid_getMinValue_9981f74b2d109da6,
          mid_getNorm_9981f74b2d109da6,
          mid_getSubVector_b1d2e600b579c4fa,
          mid_hashCode_d6ab429752e7c267,
          mid_isInfinite_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_iterator_4f613ccd2f803b4b,
          mid_map_04dd574c30a3533b,
          mid_mapAdd_2fd46ead8ae05f47,
          mid_mapAddToSelf_2fd46ead8ae05f47,
          mid_mapDivide_2fd46ead8ae05f47,
          mid_mapDivideToSelf_2fd46ead8ae05f47,
          mid_mapMultiply_2fd46ead8ae05f47,
          mid_mapMultiplyToSelf_2fd46ead8ae05f47,
          mid_mapSubtract_2fd46ead8ae05f47,
          mid_mapSubtractToSelf_2fd46ead8ae05f47,
          mid_mapToSelf_04dd574c30a3533b,
          mid_outerProduct_628dcdd789dfced9,
          mid_projection_bf8d75e459632544,
          mid_set_1ad26e8c8c0cd65b,
          mid_setEntry_4320462275d66e78,
          mid_setSubVector_543485b1a87e5329,
          mid_sparseIterator_4f613ccd2f803b4b,
          mid_subtract_bf8d75e459632544,
          mid_toArray_be783177b060994b,
          mid_unitVector_92d7e8d8d3f1dfcf,
          mid_unitize_ff7cb6c242604316,
          mid_unmodifiableRealVector_bf8d75e459632544,
          mid_walkInDefaultOrder_8785ef13fe18157c,
          mid_walkInDefaultOrder_5b6053a1b36387e3,
          mid_walkInDefaultOrder_a2c6d27191254d22,
          mid_walkInDefaultOrder_710a99d12629b412,
          mid_walkInOptimizedOrder_8785ef13fe18157c,
          mid_walkInOptimizedOrder_5b6053a1b36387e3,
          mid_walkInOptimizedOrder_a2c6d27191254d22,
          mid_walkInOptimizedOrder_710a99d12629b412,
          mid_checkVectorDimensions_8fd427ab23829bf5,
          mid_checkVectorDimensions_99bb541b0ecf3230,
          mid_checkIndices_b5d23e6c0858e8ed,
          mid_checkIndex_8fd427ab23829bf5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVector(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVector(const RealVector& obj) : ::java::lang::Object(obj) {}

        RealVector();

        RealVector add(const RealVector &) const;
        void addToEntry(jint, jdouble) const;
        RealVector append(const RealVector &) const;
        RealVector append(jdouble) const;
        RealVector combine(jdouble, jdouble, const RealVector &) const;
        RealVector combineToSelf(jdouble, jdouble, const RealVector &) const;
        RealVector copy() const;
        jdouble cosine(const RealVector &) const;
        jdouble dotProduct(const RealVector &) const;
        RealVector ebeDivide(const RealVector &) const;
        RealVector ebeMultiply(const RealVector &) const;
        jboolean equals(const ::java::lang::Object &) const;
        jint getDimension() const;
        jdouble getDistance(const RealVector &) const;
        jdouble getEntry(jint) const;
        jdouble getL1Distance(const RealVector &) const;
        jdouble getL1Norm() const;
        jdouble getLInfDistance(const RealVector &) const;
        jdouble getLInfNorm() const;
        jint getMaxIndex() const;
        jdouble getMaxValue() const;
        jint getMinIndex() const;
        jdouble getMinValue() const;
        jdouble getNorm() const;
        RealVector getSubVector(jint, jint) const;
        jint hashCode() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        ::java::util::Iterator iterator() const;
        RealVector map(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        RealVector mapAdd(jdouble) const;
        RealVector mapAddToSelf(jdouble) const;
        RealVector mapDivide(jdouble) const;
        RealVector mapDivideToSelf(jdouble) const;
        RealVector mapMultiply(jdouble) const;
        RealVector mapMultiplyToSelf(jdouble) const;
        RealVector mapSubtract(jdouble) const;
        RealVector mapSubtractToSelf(jdouble) const;
        RealVector mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction &) const;
        ::org::hipparchus::linear::RealMatrix outerProduct(const RealVector &) const;
        RealVector projection(const RealVector &) const;
        void set(jdouble) const;
        void setEntry(jint, jdouble) const;
        void setSubVector(jint, const RealVector &) const;
        ::java::util::Iterator sparseIterator() const;
        RealVector subtract(const RealVector &) const;
        JArray< jdouble > toArray() const;
        RealVector unitVector() const;
        void unitize() const;
        static RealVector unmodifiableRealVector(const RealVector &);
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor &, jint, jint) const;
        jdouble walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor &, jint, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVector);
      extern PyTypeObject *PY_TYPE(RealVector);

      class t_RealVector {
      public:
        PyObject_HEAD
        RealVector object;
        static PyObject *wrap_Object(const RealVector&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
