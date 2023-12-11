#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853IntegratorBuilder::mids$ = NULL;
        bool DormandPrince853IntegratorBuilder::live$ = false;

        jclass DormandPrince853IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853IntegratorBuilder::DormandPrince853IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince853IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince853IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince853IntegratorBuilder, t_DormandPrince853IntegratorBuilder, DormandPrince853IntegratorBuilder);

        void t_DormandPrince853IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853IntegratorBuilder), &PY_TYPE_DEF(DormandPrince853IntegratorBuilder), module, "DormandPrince853IntegratorBuilder", 0);
        }

        void t_DormandPrince853IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "class_", make_descriptor(DormandPrince853IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853IntegratorBuilder::wrap_Object(DormandPrince853IntegratorBuilder(((t_DormandPrince853IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomVectorGenerator::class$ = NULL;
      jmethodID *RandomVectorGenerator::mids$ = NULL;
      bool RandomVectorGenerator::live$ = false;

      jclass RandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextVector_a53a7513ecedada2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > RandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_a53a7513ecedada2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self);

      static PyMethodDef t_RandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomVectorGenerator)[] = {
        { Py_tp_methods, t_RandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomVectorGenerator, t_RandomVectorGenerator, RandomVectorGenerator);

      void t_RandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomVectorGenerator), &PY_TYPE_DEF(RandomVectorGenerator), module, "RandomVectorGenerator", 0);
      }

      void t_RandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "class_", make_descriptor(RandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "wrapfn_", make_descriptor(t_RandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomVectorGenerator::wrap_Object(RandomVectorGenerator(((t_RandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomVectorGenerator_nextVector(t_RandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/util/SortedMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory::class$ = NULL;
            jmethodID *CoefficientsFactory::mids$ = NULL;
            bool CoefficientsFactory::live$ = false;

            jclass CoefficientsFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeGsHs_91dc03a64efae3d5] = env->getStaticMethodID(cls, "computeGsHs", "(DDDDI)[[D");
                mids$[mid_computeGsHs_2355f919653f668f] = env->getStaticMethodID(cls, "computeGsHs", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeQns_2d3e8b8ef3940f3c] = env->getStaticMethodID(cls, "computeQns", "(DII)[[D");
                mids$[mid_computeQns_89ca475961b7cdea] = env->getStaticMethodID(cls, "computeQns", "(Lorg/hipparchus/CalculusFieldElement;II)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeVns_b99c49b5f9b9dff0] = env->getStaticMethodID(cls, "computeVns", "(I)Ljava/util/SortedMap;");
                mids$[mid_getVmns_093995dc5657c18c] = env->getStaticMethodID(cls, "getVmns", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeGsHs(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_91dc03a64efae3d5], a0, a1, a2, a3, a4));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeGsHs(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_2355f919653f668f], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeQns(jdouble a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_2d3e8b8ef3940f3c], a0, a1, a2));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeQns(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_89ca475961b7cdea], a0.this$, a1, a2));
            }

            ::java::util::SortedMap CoefficientsFactory::computeVns(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_computeVns_b99c49b5f9b9dff0], a0));
            }

            jdouble CoefficientsFactory::getVmns(jint a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getVmns_093995dc5657c18c], a0, a1, a2);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_CoefficientsFactory__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeGsHs, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeQns, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeVns, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, getVmns, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory)[] = {
              { Py_tp_methods, t_CoefficientsFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory, t_CoefficientsFactory, CoefficientsFactory);

            void t_CoefficientsFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory), &PY_TYPE_DEF(CoefficientsFactory), module, "CoefficientsFactory", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "NSKey", make_descriptor(&PY_TYPE_DEF(CoefficientsFactory$NSKey)));
            }

            void t_CoefficientsFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "class_", make_descriptor(CoefficientsFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "wrapfn_", make_descriptor(t_CoefficientsFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory::wrap_Object(CoefficientsFactory(((t_CoefficientsFactory *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jint a4;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                break;
               case 6:
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  ::org::hipparchus::Field a5((jobject) NULL);
                  PyTypeObject **p5;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4, a5));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeGsHs", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DII", &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeQns", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              ::java::util::SortedMap result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeVns(a0));
                return ::java::util::t_SortedMap::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::utilities::PY_TYPE(CoefficientsFactory$NSKey), ::java::lang::PY_TYPE(Double));
              }

              PyErr_SetArgsError(type, "computeVns", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::getVmns(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getVmns", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdaptiveStepsizeIntegrator::class$ = NULL;
        jmethodID *AdaptiveStepsizeIntegrator::mids$ = NULL;
        bool AdaptiveStepsizeIntegrator::live$ = false;

        jclass AdaptiveStepsizeIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1e32a92b3e654042] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DD[D[D)V");
            mids$[mid_init$_11f34b240685d435] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
            mids$[mid_getMaxStep_557b8123390d8d0c] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_557b8123390d8d0c] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_initializeStep_68f61e23808708b3] = env->getMethodID(cls, "initializeStep", "(ZI[DLorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_setInitialStepSize_10f281d777284cea] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setStepSizeControl_c13e969c0f339014] = env->getMethodID(cls, "setStepSizeControl", "(DD[D[D)V");
            mids$[mid_setStepSizeControl_bc3712e794ac7a81] = env->getMethodID(cls, "setStepSizeControl", "(DDDD)V");
            mids$[mid_getStepSizeHelper_3d29ab6ec5ee2607] = env->getMethodID(cls, "getStepSizeHelper", "()Lorg/hipparchus/ode/nonstiff/StepsizeHelper;");
            mids$[mid_sanityChecks_4d28f529380c21e7] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_resetInternalState_0640e6acf969ed28] = env->getMethodID(cls, "resetInternalState", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1e32a92b3e654042, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        AdaptiveStepsizeIntegrator::AdaptiveStepsizeIntegrator(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::AbstractIntegrator(env->newObject(initializeClass, &mids$, mid_init$_11f34b240685d435, a0.this$, a1, a2, a3, a4)) {}

        jdouble AdaptiveStepsizeIntegrator::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_557b8123390d8d0c]);
        }

        jdouble AdaptiveStepsizeIntegrator::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_557b8123390d8d0c]);
        }

        jdouble AdaptiveStepsizeIntegrator::initializeStep(jboolean a0, jint a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ODEStateAndDerivative & a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_initializeStep_68f61e23808708b3], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_10f281d777284cea], a0);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_c13e969c0f339014], a0, a1, a2.this$, a3.this$);
        }

        void AdaptiveStepsizeIntegrator::setStepSizeControl(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepSizeControl_bc3712e794ac7a81], a0, a1, a2, a3);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self);
        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg);
        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args);
        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data);
        static PyGetSetDef t_AdaptiveStepsizeIntegrator__fields_[] = {
          DECLARE_SET_FIELD(t_AdaptiveStepsizeIntegrator, initialStepSize),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, maxStep),
          DECLARE_GET_FIELD(t_AdaptiveStepsizeIntegrator, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdaptiveStepsizeIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, initializeStep, METH_VARARGS),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setInitialStepSize, METH_O),
          DECLARE_METHOD(t_AdaptiveStepsizeIntegrator, setStepSizeControl, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptiveStepsizeIntegrator)[] = {
          { Py_tp_methods, t_AdaptiveStepsizeIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdaptiveStepsizeIntegrator_init_ },
          { Py_tp_getset, t_AdaptiveStepsizeIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptiveStepsizeIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(AdaptiveStepsizeIntegrator, t_AdaptiveStepsizeIntegrator, AdaptiveStepsizeIntegrator);

        void t_AdaptiveStepsizeIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptiveStepsizeIntegrator), &PY_TYPE_DEF(AdaptiveStepsizeIntegrator), module, "AdaptiveStepsizeIntegrator", 0);
        }

        void t_AdaptiveStepsizeIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "class_", make_descriptor(AdaptiveStepsizeIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "wrapfn_", make_descriptor(t_AdaptiveStepsizeIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptiveStepsizeIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdaptiveStepsizeIntegrator::wrap_Object(AdaptiveStepsizeIntegrator(((t_AdaptiveStepsizeIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdaptiveStepsizeIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptiveStepsizeIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdaptiveStepsizeIntegrator_init_(t_AdaptiveStepsizeIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdaptiveStepsizeIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdaptiveStepsizeIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_getMaxStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_getMinStep(t_AdaptiveStepsizeIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_initializeStep(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a3((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "ZI[Dk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeStep(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeStep", args);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setInitialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_setStepSizeControl(t_AdaptiveStepsizeIntegrator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setStepSizeControl(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setStepSizeControl", args);
          return NULL;
        }

        static int t_AdaptiveStepsizeIntegrator_set__initialStepSize(t_AdaptiveStepsizeIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__maxStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AdaptiveStepsizeIntegrator_get__minStep(t_AdaptiveStepsizeIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *UpdatableTile::class$ = NULL;
        jmethodID *UpdatableTile::mids$ = NULL;
        bool UpdatableTile::live$ = false;

        jclass UpdatableTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/UpdatableTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_setElevation_754312f3734d6e2f] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_865bb527118ba3d3] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatableTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_754312f3734d6e2f], a0, a1, a2);
        }

        void UpdatableTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_865bb527118ba3d3], a0, a1, a2, a3, a4, a5);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args);
        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args);

        static PyMethodDef t_UpdatableTile__methods_[] = {
          DECLARE_METHOD(t_UpdatableTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatableTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatableTile, setGeometry, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatableTile)[] = {
          { Py_tp_methods, t_UpdatableTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatableTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatableTile, t_UpdatableTile, UpdatableTile);

        void t_UpdatableTile::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatableTile), &PY_TYPE_DEF(UpdatableTile), module, "UpdatableTile", 0);
        }

        void t_UpdatableTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "class_", make_descriptor(UpdatableTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "wrapfn_", make_descriptor(t_UpdatableTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatableTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatableTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatableTile::initializeClass, 1)))
            return NULL;
          return t_UpdatableTile::wrap_Object(UpdatableTile(((t_UpdatableTile *) arg)->object.this$));
        }
        static PyObject *t_UpdatableTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatableTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatableTile_setElevation(t_UpdatableTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_UpdatableTile_setGeometry(t_UpdatableTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Object::class$ = NULL;
    jmethodID *Object::mids$ = NULL;
    bool Object::live$ = false;

    jclass Object::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Object");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getClass_d4b191ff8147475d] = env->getMethodID(cls, "getClass", "()Ljava/lang/Class;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_notify_0640e6acf969ed28] = env->getMethodID(cls, "notify", "()V");
        mids$[mid_notifyAll_0640e6acf969ed28] = env->getMethodID(cls, "notifyAll", "()V");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_wait_0640e6acf969ed28] = env->getMethodID(cls, "wait", "()V");
        mids$[mid_wait_3cd6a6b354c6aa22] = env->getMethodID(cls, "wait", "(J)V");
        mids$[mid_wait_0bf85841a094cb2e] = env->getMethodID(cls, "wait", "(JI)V");
        mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Object::Object() : ::JObject(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    jboolean Object::equals(const Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Class Object::getClass() const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getClass_d4b191ff8147475d]));
    }

    jint Object::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    void Object::notify() const
    {
      env->callVoidMethod(this$, mids$[mid_notify_0640e6acf969ed28]);
    }

    void Object::notifyAll() const
    {
      env->callVoidMethod(this$, mids$[mid_notifyAll_0640e6acf969ed28]);
    }

    ::java::lang::String Object::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    void Object::wait() const
    {
      env->callVoidMethod(this$, mids$[mid_wait_0640e6acf969ed28]);
    }

    void Object::wait(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_3cd6a6b354c6aa22], a0);
    }

    void Object::wait(jlong a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_wait_0bf85841a094cb2e], a0, a1);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Object_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Object_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Object_init_(t_Object *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Object_equals(t_Object *self, PyObject *arg);
    static PyObject *t_Object_getClass(t_Object *self);
    static PyObject *t_Object_hashCode(t_Object *self);
    static PyObject *t_Object_notify(t_Object *self);
    static PyObject *t_Object_notifyAll(t_Object *self);
    static PyObject *t_Object_toString(t_Object *self);
    static PyObject *t_Object_wait(t_Object *self, PyObject *args);
    static PyObject *t_Object_get__class(t_Object *self, void *data);
    static PyGetSetDef t_Object__fields_[] = {
      DECLARE_GET_FIELD(t_Object, class),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Object__methods_[] = {
      DECLARE_METHOD(t_Object, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Object, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Object, equals, METH_O),
      DECLARE_METHOD(t_Object, getClass, METH_NOARGS),
      DECLARE_METHOD(t_Object, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Object, notify, METH_NOARGS),
      DECLARE_METHOD(t_Object, notifyAll, METH_NOARGS),
      DECLARE_METHOD(t_Object, toString, METH_NOARGS),
      DECLARE_METHOD(t_Object, wait, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Object)[] = {
      { Py_tp_methods, t_Object__methods_ },
      { Py_tp_init, (void *) t_Object_init_ },
      { Py_tp_getset, t_Object__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Object)[] = {
      &PY_TYPE_DEF(JObject),
      NULL
    };

    DEFINE_TYPE(Object, t_Object, Object);

    void t_Object::install(PyObject *module)
    {
      installType(&PY_TYPE(Object), &PY_TYPE_DEF(Object), module, "Object", 0);
    }

    void t_Object::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "class_", make_descriptor(Object::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "wrapfn_", make_descriptor(t_Object::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Object), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Object_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Object::initializeClass, 1)))
        return NULL;
      return t_Object::wrap_Object(Object(((t_Object *) arg)->object.this$));
    }
    static PyObject *t_Object_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Object::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Object_init_(t_Object *self, PyObject *args, PyObject *kwds)
    {
      Object object((jobject) NULL);

      INT_CALL(object = Object());
      self->object = object;

      return 0;
    }

    static PyObject *t_Object_equals(t_Object *self, PyObject *arg)
    {
      Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Object_getClass(t_Object *self)
    {
      ::java::lang::Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getClass());
      return ::java::lang::t_Class::wrap_Object(result);
    }

    static PyObject *t_Object_hashCode(t_Object *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Object_notify(t_Object *self)
    {
      OBJ_CALL(self->object.notify());
      Py_RETURN_NONE;
    }

    static PyObject *t_Object_notifyAll(t_Object *self)
    {
      OBJ_CALL(self->object.notifyAll());
      Py_RETURN_NONE;
    }

    static PyObject *t_Object_toString(t_Object *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toString());
      return j2p(result);
    }

    static PyObject *t_Object_wait(t_Object *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.wait());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.wait(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(self->object.wait(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "wait", args);
      return NULL;
    }

    static PyObject *t_Object_get__class(t_Object *self, void *data)
    {
      ::java::lang::Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getClass());
      return ::java::lang::t_Class::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionPenaltyAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionPenaltyAdapter::mids$ = NULL;
          bool MultivariateFunctionPenaltyAdapter::live$ = false;

          jclass MultivariateFunctionPenaltyAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_53c9091172698e93] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[DD[D)V");
              mids$[mid_value_86c4a0582e0747ce] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionPenaltyAdapter::MultivariateFunctionPenaltyAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53c9091172698e93, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

          jdouble MultivariateFunctionPenaltyAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_86c4a0582e0747ce], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionPenaltyAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionPenaltyAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionPenaltyAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionPenaltyAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionPenaltyAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionPenaltyAdapter, t_MultivariateFunctionPenaltyAdapter, MultivariateFunctionPenaltyAdapter);

          void t_MultivariateFunctionPenaltyAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionPenaltyAdapter), &PY_TYPE_DEF(MultivariateFunctionPenaltyAdapter), module, "MultivariateFunctionPenaltyAdapter", 0);
          }

          void t_MultivariateFunctionPenaltyAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "class_", make_descriptor(MultivariateFunctionPenaltyAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionPenaltyAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionPenaltyAdapter::wrap_Object(MultivariateFunctionPenaltyAdapter(((t_MultivariateFunctionPenaltyAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            jdouble a3;
            JArray< jdouble > a4((jobject) NULL);
            MultivariateFunctionPenaltyAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[DD[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = MultivariateFunctionPenaltyAdapter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/ConvergenceCheckerAndMultiplexer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerAndMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerAndMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerAndMultiplexer::live$ = false;

      jclass ConvergenceCheckerAndMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerAndMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_a643aa1e5ed43cf0] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerAndMultiplexer::ConvergenceCheckerAndMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

      jboolean ConvergenceCheckerAndMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_a643aa1e5ed43cf0], a0, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerAndMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerAndMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerAndMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerAndMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerAndMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerAndMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerAndMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerAndMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerAndMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerAndMultiplexer, t_ConvergenceCheckerAndMultiplexer, ConvergenceCheckerAndMultiplexer);
      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_Object(const ConvergenceCheckerAndMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerAndMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerAndMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerAndMultiplexer *self = (t_ConvergenceCheckerAndMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerAndMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerAndMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerAndMultiplexer), module, "ConvergenceCheckerAndMultiplexer", 0);
      }

      void t_ConvergenceCheckerAndMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "class_", make_descriptor(ConvergenceCheckerAndMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerAndMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerAndMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerAndMultiplexer::wrap_Object(ConvergenceCheckerAndMultiplexer(((t_ConvergenceCheckerAndMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerAndMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_of_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerAndMultiplexer_init_(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerAndMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerAndMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerAndMultiplexer_converged(t_ConvergenceCheckerAndMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerAndMultiplexer_get__parameters_(t_ConvergenceCheckerAndMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldDetectorBasedEventState.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldDetectorBasedEventState::class$ = NULL;
        jmethodID *FieldDetectorBasedEventState::mids$ = NULL;
        bool FieldDetectorBasedEventState::live$ = false;

        jclass FieldDetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldDetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7951513ad7dd1f46] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_doEvent_0c16f01e69648df7] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_568d6c99e8870196] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_b8a6828b51da0153] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_getEventTime_613c8f46c659f636] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_reinitializeBegin_e7d5f5a81e2a2b8e] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_tryAdvance_84ac34d0cc679299] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDetectorBasedEventState::FieldDetectorBasedEventState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7951513ad7dd1f46, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldDetectorBasedEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0c16f01e69648df7], a0.this$));
        }

        jboolean FieldDetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_568d6c99e8870196], a0.this$);
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldDetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_b8a6828b51da0153]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDetectorBasedEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_613c8f46c659f636]));
        }

        void FieldDetectorBasedEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
        }

        void FieldDetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_e7d5f5a81e2a2b8e], a0.this$);
        }

        jboolean FieldDetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_84ac34d0cc679299], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args);
        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data);
        static PyGetSetDef t_FieldDetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_FieldDetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDetectorBasedEventState)[] = {
          { Py_tp_methods, t_FieldDetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_FieldDetectorBasedEventState_init_ },
          { Py_tp_getset, t_FieldDetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDetectorBasedEventState, t_FieldDetectorBasedEventState, FieldDetectorBasedEventState);
        PyObject *t_FieldDetectorBasedEventState::wrap_Object(const FieldDetectorBasedEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDetectorBasedEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDetectorBasedEventState), &PY_TYPE_DEF(FieldDetectorBasedEventState), module, "FieldDetectorBasedEventState", 0);
        }

        void t_FieldDetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "class_", make_descriptor(FieldDetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "wrapfn_", make_descriptor(t_FieldDetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_FieldDetectorBasedEventState::wrap_Object(FieldDetectorBasedEventState(((t_FieldDetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            INT_CALL(object = FieldDetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoNavigationMessage::class$ = NULL;
            jmethodID *GalileoNavigationMessage::mids$ = NULL;
            bool GalileoNavigationMessage::live$ = false;

            jclass GalileoNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getBGDE1E5a_557b8123390d8d0c] = env->getMethodID(cls, "getBGDE1E5a", "()D");
                mids$[mid_getBGDE5bE1_557b8123390d8d0c] = env->getMethodID(cls, "getBGDE5bE1", "()D");
                mids$[mid_getDataSource_412668abc8d889e9] = env->getMethodID(cls, "getDataSource", "()I");
                mids$[mid_getIODNav_412668abc8d889e9] = env->getMethodID(cls, "getIODNav", "()I");
                mids$[mid_getSisa_557b8123390d8d0c] = env->getMethodID(cls, "getSisa", "()D");
                mids$[mid_getSvHealth_557b8123390d8d0c] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_setBGDE1E5a_10f281d777284cea] = env->getMethodID(cls, "setBGDE1E5a", "(D)V");
                mids$[mid_setBGDE5bE1_10f281d777284cea] = env->getMethodID(cls, "setBGDE5bE1", "(D)V");
                mids$[mid_setDataSource_a3da1a935cb37f7b] = env->getMethodID(cls, "setDataSource", "(I)V");
                mids$[mid_setIODNav_a3da1a935cb37f7b] = env->getMethodID(cls, "setIODNav", "(I)V");
                mids$[mid_setSisa_10f281d777284cea] = env->getMethodID(cls, "setSisa", "(D)V");
                mids$[mid_setSvHealth_10f281d777284cea] = env->getMethodID(cls, "setSvHealth", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoNavigationMessage::GalileoNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble GalileoNavigationMessage::getBGDE1E5a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE1E5a_557b8123390d8d0c]);
            }

            jdouble GalileoNavigationMessage::getBGDE5bE1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE5bE1_557b8123390d8d0c]);
            }

            jint GalileoNavigationMessage::getDataSource() const
            {
              return env->callIntMethod(this$, mids$[mid_getDataSource_412668abc8d889e9]);
            }

            jint GalileoNavigationMessage::getIODNav() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODNav_412668abc8d889e9]);
            }

            jdouble GalileoNavigationMessage::getSisa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSisa_557b8123390d8d0c]);
            }

            jdouble GalileoNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_557b8123390d8d0c]);
            }

            void GalileoNavigationMessage::setBGDE1E5a(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE1E5a_10f281d777284cea], a0);
            }

            void GalileoNavigationMessage::setBGDE5bE1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE5bE1_10f281d777284cea], a0);
            }

            void GalileoNavigationMessage::setDataSource(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataSource_a3da1a935cb37f7b], a0);
            }

            void GalileoNavigationMessage::setIODNav(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODNav_a3da1a935cb37f7b], a0);
            }

            void GalileoNavigationMessage::setSisa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisa_10f281d777284cea], a0);
            }

            void GalileoNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_10f281d777284cea], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE1E5a),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE5bE1),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, dataSource),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, iODNav),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, sisa),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, svHealth),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GalileoNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE1E5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE5bE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getDataSource, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getIODNav, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSisa, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE1E5a, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE5bE1, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setDataSource, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setIODNav, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSisa, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSvHealth, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoNavigationMessage)[] = {
              { Py_tp_methods, t_GalileoNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GalileoNavigationMessage_init_ },
              { Py_tp_getset, t_GalileoNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GalileoNavigationMessage, t_GalileoNavigationMessage, GalileoNavigationMessage);

            void t_GalileoNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoNavigationMessage), &PY_TYPE_DEF(GalileoNavigationMessage), module, "GalileoNavigationMessage", 0);
            }

            void t_GalileoNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "class_", make_descriptor(GalileoNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "wrapfn_", make_descriptor(t_GalileoNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GalileoNavigationMessage::wrap_Object(GalileoNavigationMessage(((t_GalileoNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GalileoNavigationMessage object((jobject) NULL);

              INT_CALL(object = GalileoNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDataSource());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODNav());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSisa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE1E5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE1E5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE5bE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE5bE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataSource", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODNav(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODNav", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSisa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisa", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE1E5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE1E5a", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE5bE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE5bE1", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDataSource());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataSource", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODNav());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODNav(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODNav", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSisa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSisa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisa", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/Map.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefined::class$ = NULL;
            jmethodID *UserDefined::mids$ = NULL;
            bool UserDefined::live$ = false;
            ::java::lang::String *UserDefined::USER_DEFINED_PREFIX = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_ATTRIBUTE = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_TAG = NULL;

            jclass UserDefined::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefined");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEntry_630071dd94c59169] = env->getMethodID(cls, "addEntry", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_getParameters_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getParameters", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                USER_DEFINED_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_PREFIX", "Ljava/lang/String;"));
                USER_DEFINED_XML_ATTRIBUTE = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_ATTRIBUTE", "Ljava/lang/String;"));
                USER_DEFINED_XML_TAG = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_TAG", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefined::UserDefined() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void UserDefined::addEntry(const ::java::lang::String & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEntry_630071dd94c59169], a0.this$, a1.this$);
            }

            ::java::util::Map UserDefined::getParameters() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParameters_1e62c2f73fbdd1c4]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args);
            static PyObject *t_UserDefined_getParameters(t_UserDefined *self);
            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data);
            static PyGetSetDef t_UserDefined__fields_[] = {
              DECLARE_GET_FIELD(t_UserDefined, parameters),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserDefined__methods_[] = {
              DECLARE_METHOD(t_UserDefined, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, addEntry, METH_VARARGS),
              DECLARE_METHOD(t_UserDefined, getParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefined)[] = {
              { Py_tp_methods, t_UserDefined__methods_ },
              { Py_tp_init, (void *) t_UserDefined_init_ },
              { Py_tp_getset, t_UserDefined__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefined)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(UserDefined, t_UserDefined, UserDefined);

            void t_UserDefined::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefined), &PY_TYPE_DEF(UserDefined), module, "UserDefined", 0);
            }

            void t_UserDefined::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "class_", make_descriptor(UserDefined::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "wrapfn_", make_descriptor(t_UserDefined::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "boxfn_", make_descriptor(boxObject));
              env->getClass(UserDefined::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_PREFIX", make_descriptor(j2p(*UserDefined::USER_DEFINED_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_ATTRIBUTE", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_ATTRIBUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_TAG", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_TAG)));
            }

            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefined::initializeClass, 1)))
                return NULL;
              return t_UserDefined::wrap_Object(UserDefined(((t_UserDefined *) arg)->object.this$));
            }
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefined::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds)
            {
              UserDefined object((jobject) NULL);

              INT_CALL(object = UserDefined());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(self->object.addEntry(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEntry", args);
              return NULL;
            }

            static PyObject *t_UserDefined_getParameters(t_UserDefined *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Integer.h"
#include "java/lang/Integer.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Integer::class$ = NULL;
    jmethodID *Integer::mids$ = NULL;
    bool Integer::live$ = false;
    jint Integer::BYTES = (jint) 0;
    jint Integer::MAX_VALUE = (jint) 0;
    jint Integer::MIN_VALUE = (jint) 0;
    jint Integer::SIZE = (jint) 0;
    ::java::lang::Class *Integer::TYPE = NULL;

    jclass Integer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Integer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_bitCount_0092017e99012694] = env->getStaticMethodID(cls, "bitCount", "(I)I");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_5625cf3db98dadc1] = env->getStaticMethodID(cls, "compare", "(II)I");
        mids$[mid_compareTo_cfc5a73466d69284] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Integer;)I");
        mids$[mid_compareUnsigned_5625cf3db98dadc1] = env->getStaticMethodID(cls, "compareUnsigned", "(II)I");
        mids$[mid_decode_64674f082ff20409] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_divideUnsigned_5625cf3db98dadc1] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getInteger_64674f082ff20409] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_getInteger_c2bd6b04153df558] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;");
        mids$[mid_getInteger_003d86263a2b4dbb] = env->getStaticMethodID(cls, "getInteger", "(Ljava/lang/String;I)Ljava/lang/Integer;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_0092017e99012694] = env->getStaticMethodID(cls, "hashCode", "(I)I");
        mids$[mid_highestOneBit_0092017e99012694] = env->getStaticMethodID(cls, "highestOneBit", "(I)I");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_0092017e99012694] = env->getStaticMethodID(cls, "lowestOneBit", "(I)I");
        mids$[mid_max_5625cf3db98dadc1] = env->getStaticMethodID(cls, "max", "(II)I");
        mids$[mid_min_5625cf3db98dadc1] = env->getStaticMethodID(cls, "min", "(II)I");
        mids$[mid_numberOfLeadingZeros_0092017e99012694] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(I)I");
        mids$[mid_numberOfTrailingZeros_0092017e99012694] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(I)I");
        mids$[mid_parseInt_a6602ba493f77974] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;)I");
        mids$[mid_parseInt_f5fd9af3faa747d5] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseInt_16455715465bdd07] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_parseUnsignedInt_a6602ba493f77974] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;)I");
        mids$[mid_parseUnsignedInt_f5fd9af3faa747d5] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/String;I)I");
        mids$[mid_parseUnsignedInt_16455715465bdd07] = env->getStaticMethodID(cls, "parseUnsignedInt", "(Ljava/lang/CharSequence;III)I");
        mids$[mid_remainderUnsigned_5625cf3db98dadc1] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
        mids$[mid_reverse_0092017e99012694] = env->getStaticMethodID(cls, "reverse", "(I)I");
        mids$[mid_reverseBytes_0092017e99012694] = env->getStaticMethodID(cls, "reverseBytes", "(I)I");
        mids$[mid_rotateLeft_5625cf3db98dadc1] = env->getStaticMethodID(cls, "rotateLeft", "(II)I");
        mids$[mid_rotateRight_5625cf3db98dadc1] = env->getStaticMethodID(cls, "rotateRight", "(II)I");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_0092017e99012694] = env->getStaticMethodID(cls, "signum", "(I)I");
        mids$[mid_sum_5625cf3db98dadc1] = env->getStaticMethodID(cls, "sum", "(II)I");
        mids$[mid_toBinaryString_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "toBinaryString", "(I)Ljava/lang/String;");
        mids$[mid_toHexString_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "toHexString", "(I)Ljava/lang/String;");
        mids$[mid_toOctalString_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "toOctalString", "(I)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toString_637f0334ff6ee92d] = env->getStaticMethodID(cls, "toString", "(II)Ljava/lang/String;");
        mids$[mid_toUnsignedLong_4f6383d3e31ab417] = env->getStaticMethodID(cls, "toUnsignedLong", "(I)J");
        mids$[mid_toUnsignedString_0f10d4a5e06f61c0] = env->getStaticMethodID(cls, "toUnsignedString", "(I)Ljava/lang/String;");
        mids$[mid_toUnsignedString_637f0334ff6ee92d] = env->getStaticMethodID(cls, "toUnsignedString", "(II)Ljava/lang/String;");
        mids$[mid_valueOf_64674f082ff20409] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Integer;");
        mids$[mid_valueOf_1d99b78d00f92979] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/Integer;");
        mids$[mid_valueOf_003d86263a2b4dbb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Integer;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticIntField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticIntField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Integer::Integer(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Integer::Integer(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    jint Integer::bitCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_0092017e99012694], a0);
    }

    jbyte Integer::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jint Integer::compare(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_5625cf3db98dadc1], a0, a1);
    }

    jint Integer::compareTo(const Integer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_cfc5a73466d69284], a0.this$);
    }

    jint Integer::compareUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_5625cf3db98dadc1], a0, a1);
    }

    Integer Integer::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_decode_64674f082ff20409], a0.this$));
    }

    jint Integer::divideUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_5625cf3db98dadc1], a0, a1);
    }

    jdouble Integer::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jboolean Integer::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jfloat Integer::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    Integer Integer::getInteger(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_64674f082ff20409], a0.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, const Integer & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_c2bd6b04153df558], a0.this$, a1.this$));
    }

    Integer Integer::getInteger(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_getInteger_003d86263a2b4dbb], a0.this$, a1));
    }

    jint Integer::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Integer::hashCode(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0092017e99012694], a0);
    }

    jint Integer::highestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_highestOneBit_0092017e99012694], a0);
    }

    jint Integer::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jlong Integer::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jint Integer::lowestOneBit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lowestOneBit_0092017e99012694], a0);
    }

    jint Integer::max$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_max_5625cf3db98dadc1], a0, a1);
    }

    jint Integer::min$(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_min_5625cf3db98dadc1], a0, a1);
    }

    jint Integer::numberOfLeadingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_0092017e99012694], a0);
    }

    jint Integer::numberOfTrailingZeros(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_0092017e99012694], a0);
    }

    jint Integer::parseInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_a6602ba493f77974], a0.this$);
    }

    jint Integer::parseInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_f5fd9af3faa747d5], a0.this$, a1);
    }

    jint Integer::parseInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseInt_16455715465bdd07], a0.this$, a1, a2, a3);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_a6602ba493f77974], a0.this$);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_f5fd9af3faa747d5], a0.this$, a1);
    }

    jint Integer::parseUnsignedInt(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_parseUnsignedInt_16455715465bdd07], a0.this$, a1, a2, a3);
    }

    jint Integer::remainderUnsigned(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_5625cf3db98dadc1], a0, a1);
    }

    jint Integer::reverse(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverse_0092017e99012694], a0);
    }

    jint Integer::reverseBytes(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_reverseBytes_0092017e99012694], a0);
    }

    jint Integer::rotateLeft(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateLeft_5625cf3db98dadc1], a0, a1);
    }

    jint Integer::rotateRight(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_rotateRight_5625cf3db98dadc1], a0, a1);
    }

    jshort Integer::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }

    jint Integer::signum(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_0092017e99012694], a0);
    }

    jint Integer::sum(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_sum_5625cf3db98dadc1], a0, a1);
    }

    ::java::lang::String Integer::toBinaryString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String Integer::toHexString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String Integer::toOctalString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String Integer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Integer::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String Integer::toString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_637f0334ff6ee92d], a0, a1));
    }

    jlong Integer::toUnsignedLong(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_4f6383d3e31ab417], a0);
    }

    ::java::lang::String Integer::toUnsignedString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String Integer::toUnsignedString(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_637f0334ff6ee92d], a0, a1));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_64674f082ff20409], a0.this$));
    }

    Integer Integer::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1d99b78d00f92979], a0));
    }

    Integer Integer::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Integer(env->callStaticObjectMethod(cls, mids$[mid_valueOf_003d86263a2b4dbb], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Integer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Integer_init_(t_Integer *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Integer_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_byteValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_compareTo(t_Integer *self, PyObject *arg);
    static PyObject *t_Integer_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_doubleValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_equals(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_floatValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_getInteger(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_hashCode(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_intValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_longValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_parseInt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_parseUnsignedInt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_shortValue(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toString(t_Integer *self, PyObject *args);
    static PyObject *t_Integer_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Integer_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Integer_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Integer__methods_[] = {
      DECLARE_METHOD(t_Integer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, compareTo, METH_O),
      DECLARE_METHOD(t_Integer, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, equals, METH_VARARGS),
      DECLARE_METHOD(t_Integer, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, getInteger, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Integer, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, parseInt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, parseUnsignedInt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Integer, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toString, METH_VARARGS),
      DECLARE_METHOD(t_Integer, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Integer, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Integer, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Integer)[] = {
      { Py_tp_methods, t_Integer__methods_ },
      { Py_tp_init, (void *) t_Integer_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Integer)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Integer, t_Integer, Integer);

    void t_Integer::install(PyObject *module)
    {
      installType(&PY_TYPE(Integer), &PY_TYPE_DEF(Integer), module, "Integer", 0);
    }

    void t_Integer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "class_", make_descriptor(Integer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "wrapfn_", make_descriptor(unboxInteger));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "boxfn_", make_descriptor(boxInteger));
      env->getClass(Integer::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "BYTES", make_descriptor(Integer::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "MAX_VALUE", make_descriptor(Integer::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "MIN_VALUE", make_descriptor(Integer::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "SIZE", make_descriptor(Integer::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Integer), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Integer::TYPE)));
    }

    static PyObject *t_Integer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Integer::initializeClass, 1)))
        return NULL;
      return t_Integer::wrap_Object(Integer(((t_Integer *) arg)->object.this$));
    }
    static PyObject *t_Integer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Integer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Integer_init_(t_Integer *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Integer(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          Integer object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Integer(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Integer_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Integer_byteValue(t_Integer *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Integer_compare(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Integer_compareTo(t_Integer *self, PyObject *arg)
    {
      Integer a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Integer), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Integer_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Integer result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::decode(a0));
        return t_Integer::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Integer_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::divideUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_doubleValue(t_Integer *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Integer_equals(t_Integer *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Integer_floatValue(t_Integer *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Integer_getInteger(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer a1((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Integer), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::getInteger(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInteger", args);
      return NULL;
    }

    static PyObject *t_Integer_hashCode(t_Integer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Integer_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Integer_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::highestOneBit(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Integer_intValue(t_Integer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Integer_longValue(t_Integer *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Integer_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::lowestOneBit(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Integer_max(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::max$(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Integer_min(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::min$(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Integer_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Integer_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Integer_parseInt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseInt(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseInt", args);
      return NULL;
    }

    static PyObject *t_Integer_parseUnsignedInt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Integer::parseUnsignedInt(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedInt", args);
      return NULL;
    }

    static PyObject *t_Integer_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::remainderUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Integer_reverse(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::reverse(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Integer_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Integer_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::rotateLeft(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Integer_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::rotateRight(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Integer_shortValue(t_Integer *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Integer_signum(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Integer_sum(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Integer::sum(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Integer_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Integer_toString(t_Integer *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Integer), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Integer_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Integer_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jlong result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Integer::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Integer_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Integer_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Integer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        {
          jint a0;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0));
            return t_Integer::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Integer result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Integer::valueOf(a0, a1));
            return t_Integer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$FieldSumAndResidual::class$ = NULL;
      jmethodID *MathUtils$FieldSumAndResidual::mids$ = NULL;
      bool MathUtils$FieldSumAndResidual::live$ = false;

      jclass MathUtils$FieldSumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$FieldSumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_ce0470d468f80a56] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getSum_ce0470d468f80a56] = env->getMethodID(cls, "getSum", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getResidual() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getResidual_ce0470d468f80a56]));
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getSum() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getSum_ce0470d468f80a56]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args);
      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$FieldSumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, sum),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$FieldSumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$FieldSumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$FieldSumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$FieldSumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$FieldSumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$FieldSumAndResidual, t_MathUtils$FieldSumAndResidual, MathUtils$FieldSumAndResidual);
      PyObject *t_MathUtils$FieldSumAndResidual::wrap_Object(const MathUtils$FieldSumAndResidual& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathUtils$FieldSumAndResidual::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathUtils$FieldSumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$FieldSumAndResidual), &PY_TYPE_DEF(MathUtils$FieldSumAndResidual), module, "MathUtils$FieldSumAndResidual", 0);
      }

      void t_MathUtils$FieldSumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "class_", make_descriptor(MathUtils$FieldSumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$FieldSumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$FieldSumAndResidual::wrap_Object(MathUtils$FieldSumAndResidual(((t_MathUtils$FieldSumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSum());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSum());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages::class$ = NULL;
        jmethodID *RuggedMessages::mids$ = NULL;
        bool RuggedMessages::live$ = false;
        RuggedMessages *RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::CANNOT_PARSE_LINE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_NOT_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = NULL;
        RuggedMessages *RuggedMessages::DUPLICATED_PARAMETER_NAME = NULL;
        RuggedMessages *RuggedMessages::EMPTY_TILE = NULL;
        RuggedMessages *RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = NULL;
        RuggedMessages *RuggedMessages::INTERNAL_ERROR = NULL;
        RuggedMessages *RuggedMessages::INVALID_RANGE_FOR_LINES = NULL;
        RuggedMessages *RuggedMessages::INVALID_RUGGED_NAME = NULL;
        RuggedMessages *RuggedMessages::INVALID_STEP = NULL;
        RuggedMessages *RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = NULL;
        RuggedMessages *RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_DEM_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_LAYER_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_PARAMETERS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::NO_REFERENCE_MAPPINGS = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_ANGLES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_INDICES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TIME_RANGE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = NULL;
        RuggedMessages *RuggedMessages::TILE_ALREADY_DEFINED = NULL;
        RuggedMessages *RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::UNINITIALIZED_CONTEXT = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_SENSOR = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_TILE = NULL;
        RuggedMessages *RuggedMessages::UNSUPPORTED_REFINING_CONTEXT = NULL;

        jclass RuggedMessages::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
            mids$[mid_valueOf_58702c2dbddc5040] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/errors/RuggedMessages;");
            mids$[mid_values_80d7f50a612bf925] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/errors/RuggedMessages;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            ATMOSPHERIC_REFRACTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ATMOSPHERIC_REFRACTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            CANNOT_PARSE_LINE = new RuggedMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ACTIVATION_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ACTIVATION_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ALREADY_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ALREADY_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_NOT_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_NOT_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = new RuggedMessages(env->getStaticObjectField(cls, "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DUPLICATED_PARAMETER_NAME = new RuggedMessages(env->getStaticObjectField(cls, "DUPLICATED_PARAMETER_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            EMPTY_TILE = new RuggedMessages(env->getStaticObjectField(cls, "EMPTY_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = new RuggedMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INTERNAL_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RANGE_FOR_LINES = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RANGE_FOR_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RUGGED_NAME = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RUGGED_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_STEP = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_STEP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LIGHT_TIME_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "LIGHT_TIME_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NOT_INTERPOLATOR_DUMP_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NOT_INTERPOLATOR_DUMP_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_DEM_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_DEM_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_LAYER_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_LAYER_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_PARAMETERS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "NO_PARAMETERS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_REFERENCE_MAPPINGS = new RuggedMessages(env->getStaticObjectField(cls, "NO_REFERENCE_MAPPINGS", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_ANGLES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_ANGLES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_INDICES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_INDICES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TIME_RANGE = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TIME_RANGE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_ALREADY_DEFINED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_ALREADY_DEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNINITIALIZED_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNINITIALIZED_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_SENSOR = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_SENSOR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_TILE = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNSUPPORTED_REFINING_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNSUPPORTED_REFINING_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String RuggedMessages::getLocalizedString(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
        }

        ::java::lang::String RuggedMessages::getSourceString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
        }

        RuggedMessages RuggedMessages::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return RuggedMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_58702c2dbddc5040], a0.this$));
        }

        JArray< RuggedMessages > RuggedMessages::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< RuggedMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_80d7f50a612bf925]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args);
        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg);
        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self);
        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_RuggedMessages_values(PyTypeObject *type);
        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data);
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data);
        static PyGetSetDef t_RuggedMessages__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages, sourceString),
          DECLARE_GET_FIELD(t_RuggedMessages, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages, getLocalizedString, METH_O),
          DECLARE_METHOD(t_RuggedMessages, getSourceString, METH_NOARGS),
          DECLARE_METHOD(t_RuggedMessages, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages)[] = {
          { Py_tp_methods, t_RuggedMessages__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RuggedMessages__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(RuggedMessages, t_RuggedMessages, RuggedMessages);
        PyObject *t_RuggedMessages::wrap_Object(const RuggedMessages& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages), &PY_TYPE_DEF(RuggedMessages), module, "RuggedMessages", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(RuggedMessages$UTF8Control)));
        }

        void t_RuggedMessages::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "class_", make_descriptor(RuggedMessages::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "wrapfn_", make_descriptor(t_RuggedMessages::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "boxfn_", make_descriptor(boxObject));
          env->getClass(RuggedMessages::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ATMOSPHERIC_REFRACTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "CANNOT_PARSE_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::CANNOT_PARSE_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ACTIVATION_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ALREADY_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_NOT_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_NOT_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DUPLICATED_PARAMETER_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DUPLICATED_PARAMETER_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "EMPTY_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::EMPTY_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INTERNAL_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INTERNAL_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RANGE_FOR_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RANGE_FOR_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RUGGED_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RUGGED_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_STEP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_STEP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LIGHT_TIME_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NOT_INTERPOLATOR_DUMP_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_DEM_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_DEM_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_LAYER_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_LAYER_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_PARAMETERS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_PARAMETERS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_REFERENCE_MAPPINGS", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_REFERENCE_MAPPINGS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_ANGLES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_ANGLES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_INDICES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_INDICES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TIME_RANGE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TIME_RANGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_ALREADY_DEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_ALREADY_DEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNINITIALIZED_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNINITIALIZED_CONTEXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_SENSOR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_SENSOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNSUPPORTED_REFINING_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNSUPPORTED_REFINING_CONTEXT)));
        }

        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages::wrap_Object(RuggedMessages(((t_RuggedMessages *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg)
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLocalizedString(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
          return NULL;
        }

        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceString());
          return j2p(result);
        }

        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          RuggedMessages result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::valueOf(a0));
            return t_RuggedMessages::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_RuggedMessages_values(PyTypeObject *type)
        {
          JArray< RuggedMessages > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::values());
          return JArray<jobject>(result.this$).wrap(t_RuggedMessages::wrap_jobject);
        }
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceString());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorUtil.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimatorUtil::class$ = NULL;
        jmethodID *KalmanEstimatorUtil::mids$ = NULL;
        bool KalmanEstimatorUtil::live$ = false;

        jclass KalmanEstimatorUtil::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimatorUtil");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyDynamicOutlierFilter_9cc024d2d85b53a0] = env->getStaticMethodID(cls, "applyDynamicOutlierFilter", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_checkDimension_40ad4cd5e1594ee9] = env->getStaticMethodID(cls, "checkDimension", "(ILorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;)V");
            mids$[mid_computeInnovationVector_9a65bd68ddc90580] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_computeInnovationVector_efa365481a703aad] = env->getStaticMethodID(cls, "computeInnovationVector", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;[D)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_decorate_d5883b878ac967fe] = env->getStaticMethodID(cls, "decorate", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_decorateUnscented_d5883b878ac967fe] = env->getStaticMethodID(cls, "decorateUnscented", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/estimation/sequential/MeasurementDecorator;");
            mids$[mid_filterRelevant_e38c466cbe3b97ac] = env->getStaticMethodID(cls, "filterRelevant", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;[Lorg/orekit/propagation/SpacecraftState;)[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_normalizeCovarianceMatrix_6c8b771e6146cbec] = env->getStaticMethodID(cls, "normalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeCovarianceMatrix_6c8b771e6146cbec] = env->getStaticMethodID(cls, "unnormalizeCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeInnovationCovarianceMatrix_6c8b771e6146cbec] = env->getStaticMethodID(cls, "unnormalizeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeKalmanGainMatrix_55f32a8dee1bf581] = env->getStaticMethodID(cls, "unnormalizeKalmanGainMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeMeasurementJacobian_55f32a8dee1bf581] = env->getStaticMethodID(cls, "unnormalizeMeasurementJacobian", "(Lorg/hipparchus/linear/RealMatrix;[D[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_unnormalizeStateTransitionMatrix_6c8b771e6146cbec] = env->getStaticMethodID(cls, "unnormalizeStateTransitionMatrix", "(Lorg/hipparchus/linear/RealMatrix;[D)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanEstimatorUtil::applyDynamicOutlierFilter(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_applyDynamicOutlierFilter_9cc024d2d85b53a0], a0.this$, a1.this$);
        }

        void KalmanEstimatorUtil::checkDimension(jint a0, const ::org::orekit::utils::ParameterDriversList & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::utils::ParameterDriversList & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkDimension_40ad4cd5e1594ee9], a0, a1.this$, a2.this$, a3.this$);
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_9a65bd68ddc90580], a0.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimatorUtil::computeInnovationVector(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_computeInnovationVector_efa365481a703aad], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorate(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorate_d5883b878ac967fe], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::MeasurementDecorator KalmanEstimatorUtil::decorateUnscented(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::time::AbsoluteDate & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::estimation::sequential::MeasurementDecorator(env->callStaticObjectMethod(cls, mids$[mid_decorateUnscented_d5883b878ac967fe], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimatorUtil::filterRelevant(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callStaticObjectMethod(cls, mids$[mid_filterRelevant_e38c466cbe3b97ac], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::normalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_normalizeCovarianceMatrix_6c8b771e6146cbec], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeCovarianceMatrix_6c8b771e6146cbec], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeInnovationCovarianceMatrix_6c8b771e6146cbec], a0.this$, a1.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeKalmanGainMatrix_55f32a8dee1bf581], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeMeasurementJacobian(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeMeasurementJacobian_55f32a8dee1bf581], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(const ::org::hipparchus::linear::RealMatrix & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_unnormalizeStateTransitionMatrix_6c8b771e6146cbec], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args);
        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_KalmanEstimatorUtil__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimatorUtil, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, applyDynamicOutlierFilter, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, checkDimension, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, computeInnovationVector, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, decorateUnscented, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, filterRelevant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, normalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeInnovationCovarianceMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeKalmanGainMatrix, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeMeasurementJacobian, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimatorUtil, unnormalizeStateTransitionMatrix, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimatorUtil)[] = {
          { Py_tp_methods, t_KalmanEstimatorUtil__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimatorUtil)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimatorUtil, t_KalmanEstimatorUtil, KalmanEstimatorUtil);

        void t_KalmanEstimatorUtil::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimatorUtil), &PY_TYPE_DEF(KalmanEstimatorUtil), module, "KalmanEstimatorUtil", 0);
        }

        void t_KalmanEstimatorUtil::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "class_", make_descriptor(KalmanEstimatorUtil::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "wrapfn_", make_descriptor(t_KalmanEstimatorUtil::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimatorUtil), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimatorUtil_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimatorUtil::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimatorUtil::wrap_Object(KalmanEstimatorUtil(((t_KalmanEstimatorUtil *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimatorUtil_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimatorUtil::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimatorUtil_applyDynamicOutlierFilter(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::applyDynamicOutlierFilter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "applyDynamicOutlierFilter", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_checkDimension(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList a1((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);

          if (!parseArgs(args, "Ikkk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::estimation::sequential::KalmanEstimatorUtil::checkDimension(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkDimension", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_computeInnovationVector(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArgs(args, "K[D", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_, &a1))
              {
                OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::computeInnovationVector(a0, a1));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeInnovationVector", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorate(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorate", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_decorateUnscented(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::decorateUnscented(a0, a1));
            return ::org::orekit::estimation::sequential::t_MeasurementDecorator::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "decorateUnscented", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_filterRelevant(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::filterRelevant(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          }

          PyErr_SetArgsError(type, "filterRelevant", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_normalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::normalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "normalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeInnovationCovarianceMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeInnovationCovarianceMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeInnovationCovarianceMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeKalmanGainMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeKalmanGainMatrix(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeKalmanGainMatrix", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeMeasurementJacobian(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeMeasurementJacobian(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeMeasurementJacobian", args);
          return NULL;
        }

        static PyObject *t_KalmanEstimatorUtil_unnormalizeStateTransitionMatrix(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::estimation::sequential::KalmanEstimatorUtil::unnormalizeStateTransitionMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "unnormalizeStateTransitionMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SolidTides.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SolidTides::class$ = NULL;
        jmethodID *SolidTides::mids$ = NULL;
        bool SolidTides::live$ = false;
        jint SolidTides::DEFAULT_POINTS = (jint) 0;
        jdouble SolidTides::DEFAULT_STEP = (jdouble) 0;

        jclass SolidTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SolidTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dc6d7777df2d1607] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_init$_38f73b113c0a4fc1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDLorg/orekit/forces/gravity/potential/TideSystem;ZDILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;[Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, const ::org::orekit::utils::IERSConventions & a4, const ::org::orekit::time::UT1Scale & a5, const JArray< ::org::orekit::bodies::CelestialBody > & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc6d7777df2d1607, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        SolidTides::SolidTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jboolean a4, jdouble a5, jint a6, const ::org::orekit::utils::IERSConventions & a7, const ::org::orekit::time::UT1Scale & a8, const JArray< ::org::orekit::bodies::CelestialBody > & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_38f73b113c0a4fc1, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7.this$, a8.this$, a9.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SolidTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SolidTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        jboolean SolidTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::stream::Stream SolidTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream SolidTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::java::util::List SolidTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args);
        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self);
        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self);
        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg);
        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self);
        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data);
        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data);
        static PyGetSetDef t_SolidTides__fields_[] = {
          DECLARE_GET_FIELD(t_SolidTides, eventDetectors),
          DECLARE_GET_FIELD(t_SolidTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolidTides__methods_[] = {
          DECLARE_METHOD(t_SolidTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolidTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SolidTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_SolidTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_SolidTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolidTides)[] = {
          { Py_tp_methods, t_SolidTides__methods_ },
          { Py_tp_init, (void *) t_SolidTides_init_ },
          { Py_tp_getset, t_SolidTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolidTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolidTides, t_SolidTides, SolidTides);

        void t_SolidTides::install(PyObject *module)
        {
          installType(&PY_TYPE(SolidTides), &PY_TYPE_DEF(SolidTides), module, "SolidTides", 0);
        }

        void t_SolidTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "class_", make_descriptor(SolidTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "wrapfn_", make_descriptor(t_SolidTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(SolidTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_POINTS", make_descriptor(SolidTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolidTides), "DEFAULT_STEP", make_descriptor(SolidTides::DEFAULT_STEP));
        }

        static PyObject *t_SolidTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolidTides::initializeClass, 1)))
            return NULL;
          return t_SolidTides::wrap_Object(SolidTides(((t_SolidTides *) arg)->object.this$));
        }
        static PyObject *t_SolidTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolidTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolidTides_init_(t_SolidTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::utils::IERSConventions a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::time::UT1Scale a5((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a6((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &p4, ::org::orekit::utils::t_IERSConventions::parameters_, &a5, &a6))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jboolean a4;
              jdouble a5;
              jint a6;
              ::org::orekit::utils::IERSConventions a7((jobject) NULL);
              PyTypeObject **p7;
              ::org::orekit::time::UT1Scale a8((jobject) NULL);
              JArray< ::org::orekit::bodies::CelestialBody > a9((jobject) NULL);
              SolidTides object((jobject) NULL);

              if (!parseArgs(args, "kDDKZDIKk[k", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &p7, ::org::orekit::utils::t_IERSConventions::parameters_, &a8, &a9))
              {
                INT_CALL(object = SolidTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SolidTides_acceleration(t_SolidTides *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SolidTides_dependsOnPositionOnly(t_SolidTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolidTides_getEventDetectors(t_SolidTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_SolidTides_getFieldEventDetectors(t_SolidTides *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_SolidTides_getParametersDrivers(t_SolidTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SolidTides_get__eventDetectors(t_SolidTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SolidTides_get__parametersDrivers(t_SolidTides *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSConstants::class$ = NULL;
            jmethodID *GNSSConstants::mids$ = NULL;
            bool GNSSConstants::live$ = false;
            jdouble GNSSConstants::BEIDOU_AV = (jdouble) 0;
            jdouble GNSSConstants::BEIDOU_MU = (jdouble) 0;
            jint GNSSConstants::BEIDOU_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GALILEO_AV = (jdouble) 0;
            jdouble GNSSConstants::GALILEO_MU = (jdouble) 0;
            jint GNSSConstants::GALILEO_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GLONASS_MU = (jdouble) 0;
            jdouble GNSSConstants::GLONASS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_WEEK_IN_SECONDS = (jdouble) 0;
            jdouble GNSSConstants::GPS_AV = (jdouble) 0;
            jdouble GNSSConstants::GPS_MU = (jdouble) 0;
            jint GNSSConstants::GPS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::IRNSS_AV = (jdouble) 0;
            jdouble GNSSConstants::IRNSS_MU = (jdouble) 0;
            jint GNSSConstants::IRNSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::QZSS_AV = (jdouble) 0;
            jdouble GNSSConstants::QZSS_MU = (jdouble) 0;
            jint GNSSConstants::QZSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::SBAS_MU = (jdouble) 0;

            jclass GNSSConstants::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSConstants");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BEIDOU_AV = env->getStaticDoubleField(cls, "BEIDOU_AV");
                BEIDOU_MU = env->getStaticDoubleField(cls, "BEIDOU_MU");
                BEIDOU_WEEK_NB = env->getStaticIntField(cls, "BEIDOU_WEEK_NB");
                GALILEO_AV = env->getStaticDoubleField(cls, "GALILEO_AV");
                GALILEO_MU = env->getStaticDoubleField(cls, "GALILEO_MU");
                GALILEO_WEEK_NB = env->getStaticIntField(cls, "GALILEO_WEEK_NB");
                GLONASS_MU = env->getStaticDoubleField(cls, "GLONASS_MU");
                GLONASS_PI = env->getStaticDoubleField(cls, "GLONASS_PI");
                GNSS_PI = env->getStaticDoubleField(cls, "GNSS_PI");
                GNSS_WEEK_IN_SECONDS = env->getStaticDoubleField(cls, "GNSS_WEEK_IN_SECONDS");
                GPS_AV = env->getStaticDoubleField(cls, "GPS_AV");
                GPS_MU = env->getStaticDoubleField(cls, "GPS_MU");
                GPS_WEEK_NB = env->getStaticIntField(cls, "GPS_WEEK_NB");
                IRNSS_AV = env->getStaticDoubleField(cls, "IRNSS_AV");
                IRNSS_MU = env->getStaticDoubleField(cls, "IRNSS_MU");
                IRNSS_WEEK_NB = env->getStaticIntField(cls, "IRNSS_WEEK_NB");
                QZSS_AV = env->getStaticDoubleField(cls, "QZSS_AV");
                QZSS_MU = env->getStaticDoubleField(cls, "QZSS_MU");
                QZSS_WEEK_NB = env->getStaticIntField(cls, "QZSS_WEEK_NB");
                SBAS_MU = env->getStaticDoubleField(cls, "SBAS_MU");
                live$ = true;
              }
              return (jclass) class$->this$;
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_GNSSConstants__methods_[] = {
              DECLARE_METHOD(t_GNSSConstants, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSConstants, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSConstants)[] = {
              { Py_tp_methods, t_GNSSConstants__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSConstants)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GNSSConstants, t_GNSSConstants, GNSSConstants);

            void t_GNSSConstants::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSConstants), &PY_TYPE_DEF(GNSSConstants), module, "GNSSConstants", 0);
            }

            void t_GNSSConstants::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "class_", make_descriptor(GNSSConstants::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "wrapfn_", make_descriptor(t_GNSSConstants::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "boxfn_", make_descriptor(boxObject));
              env->getClass(GNSSConstants::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_AV", make_descriptor(GNSSConstants::BEIDOU_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_MU", make_descriptor(GNSSConstants::BEIDOU_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_WEEK_NB", make_descriptor(GNSSConstants::BEIDOU_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_AV", make_descriptor(GNSSConstants::GALILEO_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_MU", make_descriptor(GNSSConstants::GALILEO_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_WEEK_NB", make_descriptor(GNSSConstants::GALILEO_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_MU", make_descriptor(GNSSConstants::GLONASS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_PI", make_descriptor(GNSSConstants::GLONASS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_PI", make_descriptor(GNSSConstants::GNSS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_WEEK_IN_SECONDS", make_descriptor(GNSSConstants::GNSS_WEEK_IN_SECONDS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_AV", make_descriptor(GNSSConstants::GPS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_MU", make_descriptor(GNSSConstants::GPS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_WEEK_NB", make_descriptor(GNSSConstants::GPS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_AV", make_descriptor(GNSSConstants::IRNSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_MU", make_descriptor(GNSSConstants::IRNSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_WEEK_NB", make_descriptor(GNSSConstants::IRNSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_AV", make_descriptor(GNSSConstants::QZSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_MU", make_descriptor(GNSSConstants::QZSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_WEEK_NB", make_descriptor(GNSSConstants::QZSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "SBAS_MU", make_descriptor(GNSSConstants::SBAS_MU));
            }

            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSConstants::initializeClass, 1)))
                return NULL;
              return t_GNSSConstants::wrap_Object(GNSSConstants(((t_GNSSConstants *) arg)->object.this$));
            }
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSConstants::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversProvider::class$ = NULL;
      jmethodID *ParameterDriversProvider::mids$ = NULL;
      bool ParameterDriversProvider::live$ = false;

      jclass ParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNbParametersDriversValue_412668abc8d889e9] = env->getMethodID(cls, "getNbParametersDriversValue", "()I");
          mids$[mid_getParameterDriver_068d3bba04590913] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_a53a7513ecedada2] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_89e8b78e4211e023] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getParameters_4ab353685404cfce] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParameters_d0cf7ce7c5c441df] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersAllValues_a53a7513ecedada2] = env->getMethodID(cls, "getParametersAllValues", "()[D");
          mids$[mid_getParametersAllValues_4ab353685404cfce] = env->getMethodID(cls, "getParametersAllValues", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_isSupported_fd2162b8a05a22fe] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ParameterDriversProvider::getNbParametersDriversValue() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParametersDriversValue_412668abc8d889e9]);
      }

      ::org::orekit::utils::ParameterDriver ParameterDriversProvider::getParameterDriver(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getParameterDriver_068d3bba04590913], a0.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_a53a7513ecedada2]));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_89e8b78e4211e023], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_4ab353685404cfce], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_d0cf7ce7c5c441df], a0.this$, a1.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParametersAllValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_a53a7513ecedada2]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParametersAllValues(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_4ab353685404cfce], a0.this$));
      }

      ::java::util::List ParameterDriversProvider::getParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
      }

      jboolean ParameterDriversProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_fd2162b8a05a22fe], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data);
      static PyGetSetDef t_ParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversProvider, nbParametersDriversValue),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parameters),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersAllValues),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, getNbParametersDriversValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameterDriver, METH_O),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameters, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersAllValues, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversProvider)[] = {
        { Py_tp_methods, t_ParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversProvider, t_ParameterDriversProvider, ParameterDriversProvider);

      void t_ParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversProvider), &PY_TYPE_DEF(ParameterDriversProvider), module, "ParameterDriversProvider", 0);
      }

      void t_ParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "class_", make_descriptor(ParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "wrapfn_", make_descriptor(t_ParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversProvider::wrap_Object(ParameterDriversProvider(((t_ParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameterDriver(a0));
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameterDriver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParameters());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParameters", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersAllValues());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParametersAllValues(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersAllValues", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameters());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersAllValues());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *AbstractEvaluation::class$ = NULL;
            jmethodID *AbstractEvaluation::mids$ = NULL;
            bool AbstractEvaluation::live$ = false;

            jclass AbstractEvaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getChiSquare_557b8123390d8d0c] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_557b8123390d8d0c] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_e95e381257af03e9] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getRMS_557b8123390d8d0c] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_69cfb132c661aca4] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getSigma_6041102868c92dbb] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEvaluation::AbstractEvaluation(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            jdouble AbstractEvaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_557b8123390d8d0c]);
            }

            jdouble AbstractEvaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_557b8123390d8d0c]);
            }

            ::org::hipparchus::linear::RealMatrix AbstractEvaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_e95e381257af03e9], a0));
            }

            jdouble AbstractEvaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_557b8123390d8d0c]);
            }

            jdouble AbstractEvaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_69cfb132c661aca4], a0);
            }

            ::org::hipparchus::linear::RealVector AbstractEvaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_6041102868c92dbb], a0));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data);
            static PyGetSetDef t_AbstractEvaluation__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractEvaluation, chiSquare),
              DECLARE_GET_FIELD(t_AbstractEvaluation, cost),
              DECLARE_GET_FIELD(t_AbstractEvaluation, rMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEvaluation__methods_[] = {
              DECLARE_METHOD(t_AbstractEvaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEvaluation)[] = {
              { Py_tp_methods, t_AbstractEvaluation__methods_ },
              { Py_tp_init, (void *) t_AbstractEvaluation_init_ },
              { Py_tp_getset, t_AbstractEvaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEvaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEvaluation, t_AbstractEvaluation, AbstractEvaluation);

            void t_AbstractEvaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEvaluation), &PY_TYPE_DEF(AbstractEvaluation), module, "AbstractEvaluation", 0);
            }

            void t_AbstractEvaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "class_", make_descriptor(AbstractEvaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "wrapfn_", make_descriptor(t_AbstractEvaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEvaluation::initializeClass, 1)))
                return NULL;
              return t_AbstractEvaluation::wrap_Object(AbstractEvaluation(((t_AbstractEvaluation *) arg)->object.this$));
            }
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEvaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              AbstractEvaluation object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = AbstractEvaluation(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "java/util/Date.h"
#include "java/io/Serializable.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbsoluteDate::class$ = NULL;
      jmethodID *AbsoluteDate::mids$ = NULL;
      bool AbsoluteDate::live$ = false;
      AbsoluteDate *AbsoluteDate::ARBITRARY_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::BEIDOU_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::CCSDS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FIFTIES_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::FUTURE_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::GALILEO_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GLONASS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::GPS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::IRNSS_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::J2000_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JAVA_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::MODIFIED_JULIAN_EPOCH = NULL;
      AbsoluteDate *AbsoluteDate::PAST_INFINITY = NULL;
      AbsoluteDate *AbsoluteDate::QZSS_EPOCH = NULL;

      jclass AbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_f22bef3f7be90029] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_9dad16b11684277b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_55e5f1b3a29334a2] = env->getMethodID(cls, "<init>", "(Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_6dfb12d5a27545cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_f8331eaca417ef63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_25bf201e87e1be4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_42d8ba320f7d96d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_89ba70c19cd9d6f2] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_49798512fb941e6e] = env->getMethodID(cls, "<init>", "(IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_bc0e51dc8cdf1c18] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_a86eaa44a12a63d4] = env->getMethodID(cls, "<init>", "(IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_7488878b3477b7fd] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_8ef471ef852a9678] = env->getStaticMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJDDate_cb84ec6d6733b717] = env->getStaticMethodID(cls, "createJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_8ef471ef852a9678] = env->getStaticMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createMJDDate_cb84ec6d6733b717] = env->getStaticMethodID(cls, "createMJDDate", "(IDLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_durationFrom_b0b988f941da47d8] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getComponents_3d17ce9b4bd527d4] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_30c7c22d393efa2f] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_bec5aa633870750e] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_6a219c20dbc2c5fa] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_86fc1a29a4250881] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_f2c75e6f52aef5dd] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_f2c75e6f52aef5dd] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBefore_f2c75e6f52aef5dd] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_f2c75e6f52aef5dd] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetween_d6602ae19eaa5ac7] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_d6602ae19eaa5ac7] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_isCloseTo_97fc7c48f8f0cf87] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/TimeStamped;D)Z");
          mids$[mid_isEqualTo_f2c75e6f52aef5dd] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/TimeStamped;)Z");
          mids$[mid_offsetFrom_0ea0045c89a146a3] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_8bb8ce1d4dd296c5] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_2c38a6bc76a8acbb] = env->getStaticMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_3c0c942d43346f72] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_2aebe8b98d76c346] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_03715ef724fe2573] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_6a1c2be46814e755] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(BB[BLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_8ef471ef852a9678] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_timeScalesOffset_34275bd5d1d6c64e] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)D");
          mids$[mid_toDate_56cd5dd9fbecaa68] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_90a03355aeb11bcb] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_0f10d4a5e06f61c0] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_8873a127a4f312ad] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_d12db31f920e6896] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_7061b71d91a23f82] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_8873a127a4f312ad] = env->getMethodID(cls, "toStringRfc3339", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_107bcc8c7bfc53c5] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(Lorg/orekit/time/TimeScale;I)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARBITRARY_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "ARBITRARY_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          BEIDOU_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "BEIDOU_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          CCSDS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "CCSDS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FIFTIES_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "FIFTIES_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          FUTURE_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "FUTURE_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          GALILEO_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GALILEO_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GLONASS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GLONASS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          GPS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "GPS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          IRNSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "IRNSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          J2000_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "J2000_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JAVA_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JAVA_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          MODIFIED_JULIAN_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "MODIFIED_JULIAN_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          PAST_INFINITY = new AbsoluteDate(env->getStaticObjectField(cls, "PAST_INFINITY", "Lorg/orekit/time/AbsoluteDate;"));
          QZSS_EPOCH = new AbsoluteDate(env->getStaticObjectField(cls, "QZSS_EPOCH", "Lorg/orekit/time/AbsoluteDate;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsoluteDate::AbsoluteDate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f22bef3f7be90029, a0.this$, a1)) {}

      AbsoluteDate::AbsoluteDate(const ::java::lang::String & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9dad16b11684277b, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::java::util::Date & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55e5f1b3a29334a2, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6dfb12d5a27545cc, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateTimeComponents & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8331eaca417ef63, a0.this$, a1.this$)) {}

      AbsoluteDate::AbsoluteDate(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_25bf201e87e1be4f, a0.this$, a1.this$, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(const AbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_42d8ba320f7d96d6, a0.this$, a1, a2.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89ba70c19cd9d6f2, a0, a1.this$, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49798512fb941e6e, a0, a1, a2, a3.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc0e51dc8cdf1c18, a0, a1.this$, a2, a3, a4, a5, a6.this$)) {}

      AbsoluteDate::AbsoluteDate(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, const ::org::orekit::time::TimeScale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a86eaa44a12a63d4, a0, a1, a2, a3, a4, a5, a6.this$)) {}

      jint AbsoluteDate::compareTo(const AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_7488878b3477b7fd], a0.this$);
      }

      AbsoluteDate AbsoluteDate::createBesselianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_8ef471ef852a9678], a0));
      }

      AbsoluteDate AbsoluteDate::createJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_cb84ec6d6733b717], a0, a1, a2.this$));
      }

      AbsoluteDate AbsoluteDate::createJulianEpoch(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_8ef471ef852a9678], a0));
      }

      AbsoluteDate AbsoluteDate::createMJDDate(jint a0, jdouble a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_cb84ec6d6733b717], a0, a1, a2.this$));
      }

      jdouble AbsoluteDate::durationFrom(const AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_b0b988f941da47d8], a0.this$);
      }

      jboolean AbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_3d17ce9b4bd527d4], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_30c7c22d393efa2f], a0));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_bec5aa633870750e], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_6a219c20dbc2c5fa], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents AbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_86fc1a29a4250881], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::getDate() const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jint AbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean AbsoluteDate::isAfter(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_f2c75e6f52aef5dd], a0.this$);
      }

      jboolean AbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_f2c75e6f52aef5dd], a0.this$);
      }

      jboolean AbsoluteDate::isBefore(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_f2c75e6f52aef5dd], a0.this$);
      }

      jboolean AbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_f2c75e6f52aef5dd], a0.this$);
      }

      jboolean AbsoluteDate::isBetween(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_d6602ae19eaa5ac7], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_d6602ae19eaa5ac7], a0.this$, a1.this$);
      }

      jboolean AbsoluteDate::isCloseTo(const ::org::orekit::time::TimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_97fc7c48f8f0cf87], a0.this$, a1);
      }

      jboolean AbsoluteDate::isEqualTo(const ::org::orekit::time::TimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_f2c75e6f52aef5dd], a0.this$);
      }

      jdouble AbsoluteDate::offsetFrom(const AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_0ea0045c89a146a3], a0.this$, a1.this$);
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_8bb8ce1d4dd296c5], a0, a1.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_2c38a6bc76a8acbb], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_3c0c942d43346f72], a0, a1.this$, a2.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSDaySegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::DateComponents & a2, const ::org::orekit::time::TimeScale & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_2aebe8b98d76c346], a0, a1.this$, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_03715ef724fe2573], a0, a1, a2.this$, a3.this$));
      }

      AbsoluteDate AbsoluteDate::parseCCSDSUnsegmentedTimeCode(jbyte a0, jbyte a1, const JArray< jbyte > & a2, const AbsoluteDate & a3, const AbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return AbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_6a1c2be46814e755], a0, a1, a2.this$, a3.this$, a4.this$));
      }

      AbsoluteDate AbsoluteDate::shiftedBy(jdouble a0) const
      {
        return AbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_8ef471ef852a9678], a0));
      }

      jdouble AbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_timeScalesOffset_34275bd5d1d6c64e], a0.this$, a1.this$);
      }

      ::java::util::Date AbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_56cd5dd9fbecaa68], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_90a03355aeb11bcb], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0f10d4a5e06f61c0], a0));
      }

      ::java::lang::String AbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8873a127a4f312ad], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d12db31f920e6896], a0.this$, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7061b71d91a23f82], a0, a1.this$));
      }

      ::java::lang::String AbsoluteDate::toStringRfc3339(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_8873a127a4f312ad], a0.this$));
      }

      ::java::lang::String AbsoluteDate::toStringWithoutUtcOffset(const ::org::orekit::time::TimeScale & a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_107bcc8c7bfc53c5], a0.this$, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self);
      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg);
      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args);
      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data);
      static PyGetSetDef t_AbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_AbsoluteDate, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_AbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, createBesselianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, durationFrom, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_AbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbsoluteDate, shiftedBy, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbsoluteDate, toStringRfc3339, METH_O),
        DECLARE_METHOD(t_AbsoluteDate, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsoluteDate)[] = {
        { Py_tp_methods, t_AbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_AbsoluteDate_init_ },
        { Py_tp_getset, t_AbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbsoluteDate, t_AbsoluteDate, AbsoluteDate);

      void t_AbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsoluteDate), &PY_TYPE_DEF(AbsoluteDate), module, "AbsoluteDate", 0);
      }

      void t_AbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "class_", make_descriptor(AbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "wrapfn_", make_descriptor(t_AbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbsoluteDate::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "ARBITRARY_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::ARBITRARY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "BEIDOU_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::BEIDOU_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "CCSDS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::CCSDS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FIFTIES_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FIFTIES_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "FUTURE_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::FUTURE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GALILEO_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GALILEO_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GLONASS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GLONASS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "GPS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::GPS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "IRNSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::IRNSS_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "J2000_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::J2000_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JAVA_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JAVA_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "MODIFIED_JULIAN_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::MODIFIED_JULIAN_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "PAST_INFINITY", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::PAST_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsoluteDate), "QZSS_EPOCH", make_descriptor(t_AbsoluteDate::wrap_Object(*AbsoluteDate::QZSS_EPOCH)));
      }

      static PyObject *t_AbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_AbsoluteDate::wrap_Object(AbsoluteDate(((t_AbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_AbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbsoluteDate_init_(t_AbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AbsoluteDate object((jobject) NULL);

            INT_CALL(object = AbsoluteDate());
            self->object = object;
            break;
          }
         case 2:
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kD", AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::util::Date a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kDk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IKIIIDk", ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::org::orekit::time::TimeScale a6((jobject) NULL);
            AbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "IIIIIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AbsoluteDate(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbsoluteDate_compareTo(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createBesselianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createJulianEpoch(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        AbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::createMJDDate(a0, a1, a2));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_durationFrom(t_AbsoluteDate *self, PyObject *arg)
      {
        AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_equals(t_AbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbsoluteDate_getComponents(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_getDate(t_AbsoluteDate *self)
      {
        AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbsoluteDate_hashCode(t_AbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbsoluteDate_isAfter(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isAfterOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBefore(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBeforeOrEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetween(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isBetweenOrEqualTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isCloseTo(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_isEqualTo(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::time::TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_offsetFrom(t_AbsoluteDate *self, PyObject *args)
      {
        AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::DateComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bkk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bk", AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            jbyte a0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            AbsoluteDate a3((jobject) NULL);
            AbsoluteDate a4((jobject) NULL);
            AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "BB[Bkk", AbsoluteDate::initializeClass, AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::AbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_shiftedBy(t_AbsoluteDate *self, PyObject *arg)
      {
        jdouble a0;
        AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_timeScalesOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toDate(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toString(t_AbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbsoluteDate), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbsoluteDate_toStringRfc3339(t_AbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toStringRfc3339(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringRfc3339", arg);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_toStringWithoutUtcOffset(t_AbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        jint a1;
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_AbsoluteDate_get__date(t_AbsoluteDate *self, void *data)
      {
        AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldTaylorMap::class$ = NULL;
        jmethodID *FieldTaylorMap::mids$ = NULL;
        bool FieldTaylorMap::live$ = false;

        jclass FieldTaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldTaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dc508ff654a63001] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_a4259b5830086408] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_compose_8a705bca13fda9e9] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_getFunction_40193fcf634e0858] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getNbFunctions_412668abc8d889e9] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_412668abc8d889e9] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_41762fd4377ff26e] = env->getMethodID(cls, "getPoint", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_invert_478258a7e7861983] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/FieldMatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/FieldTaylorMap;");
            mids$[mid_value_0d5d57abd8dbe925] = env->getMethodID(cls, "value", "([D)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a126e91ca3e53df2] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTaylorMap::FieldTaylorMap(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc508ff654a63001, a0.this$, a1.this$)) {}

        FieldTaylorMap::FieldTaylorMap(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a4259b5830086408, a0.this$, a1, a2, a3)) {}

        FieldTaylorMap FieldTaylorMap::compose(const FieldTaylorMap & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_compose_8a705bca13fda9e9], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldTaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_40193fcf634e0858], a0));
        }

        jint FieldTaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_412668abc8d889e9]);
        }

        jint FieldTaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::getPoint() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPoint_41762fd4377ff26e]));
        }

        FieldTaylorMap FieldTaylorMap::invert(const ::org::hipparchus::linear::FieldMatrixDecomposer & a0) const
        {
          return FieldTaylorMap(env->callObjectMethod(this$, mids$[mid_invert_478258a7e7861983], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_0d5d57abd8dbe925], a0.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldTaylorMap::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_a126e91ca3e53df2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args);
        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self);
        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg);
        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args);
        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data);
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data);
        static PyGetSetDef t_FieldTaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_FieldTaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_FieldTaylorMap, point),
          DECLARE_GET_FIELD(t_FieldTaylorMap, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTaylorMap__methods_[] = {
          DECLARE_METHOD(t_FieldTaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTaylorMap, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTaylorMap, compose, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_FieldTaylorMap, invert, METH_O),
          DECLARE_METHOD(t_FieldTaylorMap, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTaylorMap)[] = {
          { Py_tp_methods, t_FieldTaylorMap__methods_ },
          { Py_tp_init, (void *) t_FieldTaylorMap_init_ },
          { Py_tp_getset, t_FieldTaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTaylorMap, t_FieldTaylorMap, FieldTaylorMap);
        PyObject *t_FieldTaylorMap::wrap_Object(const FieldTaylorMap& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTaylorMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTaylorMap::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTaylorMap *self = (t_FieldTaylorMap *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTaylorMap), &PY_TYPE_DEF(FieldTaylorMap), module, "FieldTaylorMap", 0);
        }

        void t_FieldTaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "class_", make_descriptor(FieldTaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "wrapfn_", make_descriptor(t_FieldTaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTaylorMap::initializeClass, 1)))
            return NULL;
          return t_FieldTaylorMap::wrap_Object(FieldTaylorMap(((t_FieldTaylorMap *) arg)->object.this$));
        }
        static PyObject *t_FieldTaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTaylorMap_of_(t_FieldTaylorMap *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTaylorMap_init_(t_FieldTaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              FieldTaylorMap object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldTaylorMap(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldTaylorMap_compose(t_FieldTaylorMap *self, PyObject *arg)
        {
          FieldTaylorMap a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", FieldTaylorMap::initializeClass, &a0, &p0, t_FieldTaylorMap::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getFunction(t_FieldTaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_getNbFunctions(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getNbParameters(t_FieldTaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldTaylorMap_getPoint(t_FieldTaylorMap *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldTaylorMap_invert(t_FieldTaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::FieldMatrixDecomposer a0((jobject) NULL);
          PyTypeObject **p0;
          FieldTaylorMap result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrixDecomposer::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixDecomposer::parameters_))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_FieldTaylorMap::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_FieldTaylorMap_value(t_FieldTaylorMap *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldTaylorMap_get__parameters_(t_FieldTaylorMap *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldTaylorMap_get__nbFunctions(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__nbParameters(t_FieldTaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldTaylorMap_get__point(t_FieldTaylorMap *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *UtcId::class$ = NULL;
          jmethodID *UtcId::mids$ = NULL;
          bool UtcId::live$ = false;
          UtcId *UtcId::GAL = NULL;
          UtcId *UtcId::IRN = NULL;
          UtcId *UtcId::NICT = NULL;
          UtcId *UtcId::NIST = NULL;
          UtcId *UtcId::NTSC = NULL;
          UtcId *UtcId::OP = NULL;
          UtcId *UtcId::SU = NULL;
          UtcId *UtcId::USNO = NULL;

          jclass UtcId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/UtcId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseUtcId_9f2eee73709b5560] = env->getStaticMethodID(cls, "parseUtcId", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_valueOf_9f2eee73709b5560] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_values_196341a182645da7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/UtcId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GAL = new UtcId(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              IRN = new UtcId(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NICT = new UtcId(env->getStaticObjectField(cls, "NICT", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NIST = new UtcId(env->getStaticObjectField(cls, "NIST", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NTSC = new UtcId(env->getStaticObjectField(cls, "NTSC", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              OP = new UtcId(env->getStaticObjectField(cls, "OP", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              SU = new UtcId(env->getStaticObjectField(cls, "SU", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              USNO = new UtcId(env->getStaticObjectField(cls, "USNO", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UtcId UtcId::parseUtcId(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_parseUtcId_9f2eee73709b5560], a0.this$));
          }

          UtcId UtcId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9f2eee73709b5560], a0.this$));
          }

          JArray< UtcId > UtcId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< UtcId >(env->callStaticObjectMethod(cls, mids$[mid_values_196341a182645da7]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args);
          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_UtcId_values(PyTypeObject *type);
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data);
          static PyGetSetDef t_UtcId__fields_[] = {
            DECLARE_GET_FIELD(t_UtcId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UtcId__methods_[] = {
            DECLARE_METHOD(t_UtcId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, of_, METH_VARARGS),
            DECLARE_METHOD(t_UtcId, parseUtcId, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_UtcId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UtcId)[] = {
            { Py_tp_methods, t_UtcId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UtcId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UtcId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(UtcId, t_UtcId, UtcId);
          PyObject *t_UtcId::wrap_Object(const UtcId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UtcId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UtcId::install(PyObject *module)
          {
            installType(&PY_TYPE(UtcId), &PY_TYPE_DEF(UtcId), module, "UtcId", 0);
          }

          void t_UtcId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "class_", make_descriptor(UtcId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "wrapfn_", make_descriptor(t_UtcId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "boxfn_", make_descriptor(boxObject));
            env->getClass(UtcId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "GAL", make_descriptor(t_UtcId::wrap_Object(*UtcId::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "IRN", make_descriptor(t_UtcId::wrap_Object(*UtcId::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NICT", make_descriptor(t_UtcId::wrap_Object(*UtcId::NICT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NIST", make_descriptor(t_UtcId::wrap_Object(*UtcId::NIST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NTSC", make_descriptor(t_UtcId::wrap_Object(*UtcId::NTSC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "OP", make_descriptor(t_UtcId::wrap_Object(*UtcId::OP)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "SU", make_descriptor(t_UtcId::wrap_Object(*UtcId::SU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "USNO", make_descriptor(t_UtcId::wrap_Object(*UtcId::USNO)));
          }

          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UtcId::initializeClass, 1)))
              return NULL;
            return t_UtcId::wrap_Object(UtcId(((t_UtcId *) arg)->object.this$));
          }
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UtcId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::parseUtcId(a0));
              return t_UtcId::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseUtcId", arg);
            return NULL;
          }

          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::valueOf(a0));
              return t_UtcId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_UtcId_values(PyTypeObject *type)
          {
            JArray< UtcId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::values());
            return JArray<jobject>(result.this$).wrap(t_UtcId::wrap_jobject);
          }
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A1::class$ = NULL;
          jmethodID *SubFrame4A1::mids$ = NULL;
          bool SubFrame4A1::live$ = false;

          jclass SubFrame4A1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A1");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A1__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A1, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A1)[] = {
            { Py_tp_methods, t_SubFrame4A1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A1, t_SubFrame4A1, SubFrame4A1);

          void t_SubFrame4A1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A1), &PY_TYPE_DEF(SubFrame4A1), module, "SubFrame4A1", 0);
          }

          void t_SubFrame4A1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "class_", make_descriptor(SubFrame4A1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "wrapfn_", make_descriptor(t_SubFrame4A1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A1::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A1::wrap_Object(SubFrame4A1(((t_SubFrame4A1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1DFormat::class$ = NULL;
          jmethodID *Vector1DFormat::mids$ = NULL;
          bool Vector1DFormat::live$ = false;

          jclass Vector1DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_a588adb4788c769e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_6f1f6993f3124ea0] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector1DFormat_db73d8f487ad5091] = env->getStaticMethodID(cls, "getVector1DFormat", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_getVector1DFormat_0b31e7058e9c8907] = env->getStaticMethodID(cls, "getVector1DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_parse_a8c76d737531d495] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_parse_6e45f1ee6f020de9] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1DFormat::Vector1DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Vector1DFormat::Vector1DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_a588adb4788c769e, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::StringBuffer Vector1DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_6f1f6993f3124ea0], a0.this$, a1.this$, a2.this$));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_db73d8f487ad5091]));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_0b31e7058e9c8907], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_a8c76d737531d495], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_6e45f1ee6f020de9], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {
          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args);
          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data);
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data);
          static PyGetSetDef t_Vector1DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1DFormat, vector1DFormat),
            DECLARE_GET_FIELD(t_Vector1DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector1DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, getVector1DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1DFormat)[] = {
            { Py_tp_methods, t_Vector1DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector1DFormat_init_ },
            { Py_tp_getset, t_Vector1DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector1DFormat, t_Vector1DFormat, Vector1DFormat);
          PyObject *t_Vector1DFormat::wrap_Object(const Vector1DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector1DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector1DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1DFormat), &PY_TYPE_DEF(Vector1DFormat), module, "Vector1DFormat", 0);
          }

          void t_Vector1DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "class_", make_descriptor(Vector1DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "wrapfn_", make_descriptor(t_Vector1DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector1DFormat::wrap_Object(Vector1DFormat(((t_Vector1DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat object((jobject) NULL);

                INT_CALL(object = Vector1DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector1DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::text::NumberFormat a2((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat());
                return t_Vector1DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector1DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat(a0));
                  return t_Vector1DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector1DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data)
          {
            Vector1DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector1DFormat());
            return t_Vector1DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Dipole::class$ = NULL;
          jmethodID *Dipole::mids$ = NULL;
          bool Dipole::live$ = false;
          Dipole *Dipole::CANONICAL_I_J = NULL;

          jclass Dipole::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Dipole");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getPrimary_f88961cca75a2c0a] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSecondary_f88961cca75a2c0a] = env->getMethodID(cls, "getSecondary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CANONICAL_I_J = new Dipole(env->getStaticObjectField(cls, "CANONICAL_I_J", "Lorg/orekit/estimation/measurements/gnss/Dipole;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getPrimary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPrimary_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getSecondary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSecondary_f88961cca75a2c0a]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_getPrimary(t_Dipole *self);
          static PyObject *t_Dipole_getSecondary(t_Dipole *self);
          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data);
          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data);
          static PyGetSetDef t_Dipole__fields_[] = {
            DECLARE_GET_FIELD(t_Dipole, primary),
            DECLARE_GET_FIELD(t_Dipole, secondary),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Dipole__methods_[] = {
            DECLARE_METHOD(t_Dipole, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, getPrimary, METH_NOARGS),
            DECLARE_METHOD(t_Dipole, getSecondary, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Dipole)[] = {
            { Py_tp_methods, t_Dipole__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Dipole__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Dipole)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Dipole, t_Dipole, Dipole);

          void t_Dipole::install(PyObject *module)
          {
            installType(&PY_TYPE(Dipole), &PY_TYPE_DEF(Dipole), module, "Dipole", 0);
          }

          void t_Dipole::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "class_", make_descriptor(Dipole::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "wrapfn_", make_descriptor(t_Dipole::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "boxfn_", make_descriptor(boxObject));
            env->getClass(Dipole::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "CANONICAL_I_J", make_descriptor(t_Dipole::wrap_Object(*Dipole::CANONICAL_I_J)));
          }

          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Dipole::initializeClass, 1)))
              return NULL;
            return t_Dipole::wrap_Object(Dipole(((t_Dipole *) arg)->object.this$));
          }
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Dipole::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Dipole_getPrimary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_getSecondary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/Bias.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *Bias::class$ = NULL;
          jmethodID *Bias::mids$ = NULL;
          bool Bias::live$ = false;

          jclass Bias::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/Bias");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb21d3aa0a3a1674] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;[D[D[D[D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Bias::Bias(const JArray< ::java::lang::String > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb21d3aa0a3a1674, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::java::util::List Bias::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void Bias::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void Bias::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args);
          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Bias_getParametersDrivers(t_Bias *self);
          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data);
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data);
          static PyGetSetDef t_Bias__fields_[] = {
            DECLARE_GET_FIELD(t_Bias, parametersDrivers),
            DECLARE_GET_FIELD(t_Bias, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Bias__methods_[] = {
            DECLARE_METHOD(t_Bias, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, of_, METH_VARARGS),
            DECLARE_METHOD(t_Bias, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_Bias, modify, METH_O),
            DECLARE_METHOD(t_Bias, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Bias)[] = {
            { Py_tp_methods, t_Bias__methods_ },
            { Py_tp_init, (void *) t_Bias_init_ },
            { Py_tp_getset, t_Bias__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Bias)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Bias, t_Bias, Bias);
          PyObject *t_Bias::wrap_Object(const Bias& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Bias::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Bias::install(PyObject *module)
          {
            installType(&PY_TYPE(Bias), &PY_TYPE_DEF(Bias), module, "Bias", 0);
          }

          void t_Bias::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "class_", make_descriptor(Bias::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "wrapfn_", make_descriptor(t_Bias::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Bias::initializeClass, 1)))
              return NULL;
            return t_Bias::wrap_Object(Bias(((t_Bias *) arg)->object.this$));
          }
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Bias::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds)
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            Bias object((jobject) NULL);

            if (!parseArgs(args, "[s[D[D[D[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Bias(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Bias_getParametersDrivers(t_Bias *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationAlgorithm::class$ = NULL;
            jmethodID *TleGenerationAlgorithm::mids$ = NULL;
            bool TleGenerationAlgorithm::live$ = false;

            jclass TleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_d1897b6bbe0a4251] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_e9ff15b430a2bfc5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_d1897b6bbe0a4251], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_e9ff15b430a2bfc5], a0.this$, a1.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_TleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_TleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_TleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationAlgorithm, t_TleGenerationAlgorithm, TleGenerationAlgorithm);

            void t_TleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationAlgorithm), &PY_TYPE_DEF(TleGenerationAlgorithm), module, "TleGenerationAlgorithm", 0);
            }

            void t_TleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "class_", make_descriptor(TleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "wrapfn_", make_descriptor(t_TleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_TleGenerationAlgorithm::wrap_Object(TleGenerationAlgorithm(((t_TleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *SparseGradient::class$ = NULL;
        jmethodID *SparseGradient::mids$ = NULL;
        bool SparseGradient::live$ = false;

        jclass SparseGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/SparseGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_dd1b4eb82107346a] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acos_dd1b4eb82107346a] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acosh_dd1b4eb82107346a] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_548dd95c05819ed5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_3b3e2baab4ba214f] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_addInPlace_02f4c748383125f5] = env->getMethodID(cls, "addInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_asin_dd1b4eb82107346a] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_asinh_dd1b4eb82107346a] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan_dd1b4eb82107346a] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_548dd95c05819ed5] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_87f3fc51f83e8305] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atanh_dd1b4eb82107346a] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cbrt_dd1b4eb82107346a] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ceil_dd1b4eb82107346a] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_compose_27b8300fbec6466e] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_548dd95c05819ed5] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_3b3e2baab4ba214f] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cos_dd1b4eb82107346a] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cosh_dd1b4eb82107346a] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createConstant_3b3e2baab4ba214f] = env->getStaticMethodID(cls, "createConstant", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createVariable_7f13aa129fa2a40a] = env->getStaticMethodID(cls, "createVariable", "(ID)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_548dd95c05819ed5] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_3b3e2baab4ba214f] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_dd1b4eb82107346a] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_expm1_dd1b4eb82107346a] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_floor_dd1b4eb82107346a] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getDerivative_69cfb132c661aca4] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getPi_dd1b4eb82107346a] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_548dd95c05819ed5] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_hypot_87f3fc51f83e8305] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_5d627bed16f25bd1] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_2fbb5ae2b2d7175e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/SparseGradient;[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_7a18e1156f14ae59] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_a4900d694e4331bc] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_ac5572c1da41411c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_50e50f5e5e0cdba7] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_b3d3963a7e6f582d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_79e0b6cf30dd7b36] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log_dd1b4eb82107346a] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log10_dd1b4eb82107346a] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log1p_dd1b4eb82107346a] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_548dd95c05819ed5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_3b3e2baab4ba214f] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_2d1990ab15bf750f] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiplyInPlace_02f4c748383125f5] = env->getMethodID(cls, "multiplyInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_negate_dd1b4eb82107346a] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_newInstance_3b3e2baab4ba214f] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_numVars_412668abc8d889e9] = env->getMethodID(cls, "numVars", "()I");
            mids$[mid_pow_548dd95c05819ed5] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_3b3e2baab4ba214f] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_2d1990ab15bf750f] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_f682c8154a4a9788] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_reciprocal_dd1b4eb82107346a] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_548dd95c05819ed5] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_3b3e2baab4ba214f] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rint_dd1b4eb82107346a] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rootN_2d1990ab15bf750f] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_scalb_2d1990ab15bf750f] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sign_dd1b4eb82107346a] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sin_dd1b4eb82107346a] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_dd1b4eb82107346a] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_dd1b4eb82107346a] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_548dd95c05819ed5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_3b3e2baab4ba214f] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tan_dd1b4eb82107346a] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tanh_dd1b4eb82107346a] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_taylor_86c4a0582e0747ce] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_dd1b4eb82107346a] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_toRadians_dd1b4eb82107346a] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ulp_dd1b4eb82107346a] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SparseGradient SparseGradient::abs() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_abs_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::acos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acos_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::acosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acosh_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::add(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::add(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_3b3e2baab4ba214f], a0));
        }

        void SparseGradient::addInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addInPlace_02f4c748383125f5], a0.this$);
        }

        SparseGradient SparseGradient::asin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asin_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::asinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asinh_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::atan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan2_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_atan2_87f3fc51f83e8305], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::atanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atanh_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::cbrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cbrt_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::ceil() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ceil_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::compose(const JArray< jdouble > & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_compose_27b8300fbec6466e], a0.this$));
        }

        SparseGradient SparseGradient::copySign(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::copySign(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_3b3e2baab4ba214f], a0));
        }

        SparseGradient SparseGradient::cos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cos_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::cosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cosh_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::createConstant(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createConstant_3b3e2baab4ba214f], a0));
        }

        SparseGradient SparseGradient::createVariable(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createVariable_7f13aa129fa2a40a], a0, a1));
        }

        SparseGradient SparseGradient::divide(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::divide(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_3b3e2baab4ba214f], a0));
        }

        jboolean SparseGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        SparseGradient SparseGradient::exp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_exp_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::expm1() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_expm1_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::floor() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_floor_dd1b4eb82107346a]));
        }

        jdouble SparseGradient::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_69cfb132c661aca4], a0);
        }

        ::org::hipparchus::Field SparseGradient::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        SparseGradient SparseGradient::getPi() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_getPi_dd1b4eb82107346a]));
        }

        jdouble SparseGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        jdouble SparseGradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jint SparseGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_hypot_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_hypot_87f3fc51f83e8305], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< jdouble > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_5d627bed16f25bd1], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< SparseGradient > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_2fbb5ae2b2d7175e], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_7a18e1156f14ae59], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_a4900d694e4331bc], a0, a1.this$, a2, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_ac5572c1da41411c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_50e50f5e5e0cdba7], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5, const SparseGradient & a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_b3d3963a7e6f582d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5, jdouble a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_79e0b6cf30dd7b36], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        SparseGradient SparseGradient::log() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::log10() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log10_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::log1p() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log1p_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::multiply(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::multiply(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_3b3e2baab4ba214f], a0));
        }

        SparseGradient SparseGradient::multiply(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_2d1990ab15bf750f], a0));
        }

        void SparseGradient::multiplyInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_multiplyInPlace_02f4c748383125f5], a0.this$);
        }

        SparseGradient SparseGradient::negate() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_negate_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::newInstance(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_newInstance_3b3e2baab4ba214f], a0));
        }

        jint SparseGradient::numVars() const
        {
          return env->callIntMethod(this$, mids$[mid_numVars_412668abc8d889e9]);
        }

        SparseGradient SparseGradient::pow(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::pow(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_3b3e2baab4ba214f], a0));
        }

        SparseGradient SparseGradient::pow(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_2d1990ab15bf750f], a0));
        }

        SparseGradient SparseGradient::pow(jdouble a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_f682c8154a4a9788], a0, a1.this$));
        }

        SparseGradient SparseGradient::reciprocal() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::remainder(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::remainder(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_3b3e2baab4ba214f], a0));
        }

        SparseGradient SparseGradient::rint() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rint_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::rootN(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rootN_2d1990ab15bf750f], a0));
        }

        SparseGradient SparseGradient::scalb(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_scalb_2d1990ab15bf750f], a0));
        }

        SparseGradient SparseGradient::sign() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sign_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::sin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sin_dd1b4eb82107346a]));
        }

        ::org::hipparchus::util::FieldSinCos SparseGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        SparseGradient SparseGradient::sinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sinh_dd1b4eb82107346a]));
        }

        ::org::hipparchus::util::FieldSinhCosh SparseGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        SparseGradient SparseGradient::sqrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sqrt_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::subtract(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_548dd95c05819ed5], a0.this$));
        }

        SparseGradient SparseGradient::subtract(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_3b3e2baab4ba214f], a0));
        }

        SparseGradient SparseGradient::tan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tan_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::tanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tanh_dd1b4eb82107346a]));
        }

        jdouble SparseGradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_86c4a0582e0747ce], a0.this$);
        }

        SparseGradient SparseGradient::toDegrees() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::toRadians() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toRadians_dd1b4eb82107346a]));
        }

        SparseGradient SparseGradient::ulp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ulp_dd1b4eb82107346a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_abs(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_asin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self);
        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_cos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_exp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self);
        static PyObject *t_SparseGradient_floor(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_getField(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self);
        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_log(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log10(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self);
        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_negate(t_SparseGradient *self);
        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self);
        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_rint(t_SparseGradient *self);
        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_sign(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_tan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self);
        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data);
        static PyGetSetDef t_SparseGradient__fields_[] = {
          DECLARE_GET_FIELD(t_SparseGradient, field),
          DECLARE_GET_FIELD(t_SparseGradient, pi),
          DECLARE_GET_FIELD(t_SparseGradient, real),
          DECLARE_GET_FIELD(t_SparseGradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SparseGradient__methods_[] = {
          DECLARE_METHOD(t_SparseGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, addInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan2, METH_O),
          DECLARE_METHOD(t_SparseGradient, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, compose, METH_O),
          DECLARE_METHOD(t_SparseGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, createConstant, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, createVariable, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getDerivative, METH_O),
          DECLARE_METHOD(t_SparseGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, hypot, METH_O),
          DECLARE_METHOD(t_SparseGradient, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, multiplyInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, newInstance, METH_O),
          DECLARE_METHOD(t_SparseGradient, numVars, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, rootN, METH_O),
          DECLARE_METHOD(t_SparseGradient, scalb, METH_O),
          DECLARE_METHOD(t_SparseGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, taylor, METH_O),
          DECLARE_METHOD(t_SparseGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SparseGradient)[] = {
          { Py_tp_methods, t_SparseGradient__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SparseGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SparseGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SparseGradient, t_SparseGradient, SparseGradient);

        void t_SparseGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(SparseGradient), &PY_TYPE_DEF(SparseGradient), module, "SparseGradient", 0);
        }

        void t_SparseGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "class_", make_descriptor(SparseGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "wrapfn_", make_descriptor(t_SparseGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SparseGradient::initializeClass, 1)))
            return NULL;
          return t_SparseGradient::wrap_Object(SparseGradient(((t_SparseGradient *) arg)->object.this$));
        }
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SparseGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SparseGradient_abs(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_asin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::atan2(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_cos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createConstant(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createConstant", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createVariable(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createVariable", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_SparseGradient_exp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_floor(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_getField(t_SparseGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::hypot(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              JArray< SparseGradient > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient a6((jobject) NULL);
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              jdouble a6;
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_log(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log10(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.multiplyInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "multiplyInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_negate(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.numVars());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::pow(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_rint(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_sign(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_tan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data)
        {
          SparseGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_SparseGradient::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinCos::class$ = NULL;
      jmethodID *FieldSinCos::mids$ = NULL;
      bool FieldSinCos::live$ = false;

      jclass FieldSinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cdf90f5ab4b39eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cos_e661fe3ba2fafb22] = env->getMethodID(cls, "cos", "()Ljava/lang/Object;");
          mids$[mid_difference_d160f12151991377] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sin_e661fe3ba2fafb22] = env->getMethodID(cls, "sin", "()Ljava/lang/Object;");
          mids$[mid_sum_d160f12151991377] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinCos::FieldSinCos(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cdf90f5ab4b39eca, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinCos::cos() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cos_e661fe3ba2fafb22]));
      }

      FieldSinCos FieldSinCos::difference(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_d160f12151991377], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinCos::sin() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sin_e661fe3ba2fafb22]));
      }

      FieldSinCos FieldSinCos::sum(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_d160f12151991377], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args);
      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data);
      static PyGetSetDef t_FieldSinCos__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinCos, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinCos__methods_[] = {
        DECLARE_METHOD(t_FieldSinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinCos)[] = {
        { Py_tp_methods, t_FieldSinCos__methods_ },
        { Py_tp_init, (void *) t_FieldSinCos_init_ },
        { Py_tp_getset, t_FieldSinCos__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinCos, t_FieldSinCos, FieldSinCos);
      PyObject *t_FieldSinCos::wrap_Object(const FieldSinCos& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinCos::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinCos), &PY_TYPE_DEF(FieldSinCos), module, "FieldSinCos", 0);
      }

      void t_FieldSinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "class_", make_descriptor(FieldSinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "wrapfn_", make_descriptor(t_FieldSinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinCos::initializeClass, 1)))
          return NULL;
        return t_FieldSinCos::wrap_Object(FieldSinCos(((t_FieldSinCos *) arg)->object.this$));
      }
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinCos object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinCos(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::difference(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::sum(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractMatricesHarvester.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractMatricesHarvester::class$ = NULL;
      jmethodID *PythonAbstractMatricesHarvester::mids$ = NULL;
      bool PythonAbstractMatricesHarvester::live$ = false;

      jclass PythonAbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_37a7a25250858c8e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_freezeColumnsNames_0640e6acf969ed28] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMatricesHarvester::PythonAbstractMatricesHarvester(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::org::orekit::propagation::AbstractMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_37a7a25250858c8e, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonAbstractMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonAbstractMatricesHarvester::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self);
      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args);
      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonAbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonAbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonAbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMatricesHarvester, t_PythonAbstractMatricesHarvester, PythonAbstractMatricesHarvester);

      void t_PythonAbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMatricesHarvester), &PY_TYPE_DEF(PythonAbstractMatricesHarvester), module, "PythonAbstractMatricesHarvester", 1);
      }

      void t_PythonAbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "class_", make_descriptor(PythonAbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "freezeColumnsNames", "()V", (void *) t_PythonAbstractMatricesHarvester_freezeColumnsNames0 },
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonAbstractMatricesHarvester_getOrbitType2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonAbstractMatricesHarvester_getPositionAngleType3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMatricesHarvester_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMatricesHarvester::wrap_Object(PythonAbstractMatricesHarvester(((t_PythonAbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        PythonAbstractMatricesHarvester object((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractMatricesHarvester(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "freezeColumnsNames", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *Ndm::class$ = NULL;
          jmethodID *Ndm::mids$ = NULL;
          bool Ndm::live$ = false;

          jclass Ndm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/Ndm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aaa4588ba4c2491b] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_getConstituents_0d9551367f7ecdef] = env->getMethodID(cls, "getConstituents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Ndm::Ndm(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aaa4588ba4c2491b, a0.this$, a1.this$)) {}

          ::java::util::List Ndm::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
          }

          ::java::util::List Ndm::getConstituents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConstituents_0d9551367f7ecdef]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Ndm_getComments(t_Ndm *self);
          static PyObject *t_Ndm_getConstituents(t_Ndm *self);
          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data);
          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data);
          static PyGetSetDef t_Ndm__fields_[] = {
            DECLARE_GET_FIELD(t_Ndm, comments),
            DECLARE_GET_FIELD(t_Ndm, constituents),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Ndm__methods_[] = {
            DECLARE_METHOD(t_Ndm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, getComments, METH_NOARGS),
            DECLARE_METHOD(t_Ndm, getConstituents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Ndm)[] = {
            { Py_tp_methods, t_Ndm__methods_ },
            { Py_tp_init, (void *) t_Ndm_init_ },
            { Py_tp_getset, t_Ndm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Ndm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Ndm, t_Ndm, Ndm);

          void t_Ndm::install(PyObject *module)
          {
            installType(&PY_TYPE(Ndm), &PY_TYPE_DEF(Ndm), module, "Ndm", 0);
          }

          void t_Ndm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "class_", make_descriptor(Ndm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "wrapfn_", make_descriptor(t_Ndm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Ndm::initializeClass, 1)))
              return NULL;
            return t_Ndm::wrap_Object(Ndm(((t_Ndm *) arg)->object.this$));
          }
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Ndm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            Ndm object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = Ndm(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Ndm_getComments(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_Ndm_getConstituents(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_1_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_3_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::HECTO_PASCAL = NULL;
          ::org::orekit::utils::units::Unit *Units::HZ_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KG_M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM3_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S3 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NANO_TESLA = NULL;
          ::org::orekit::utils::units::Unit *Units::NB_PER_Y = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M_S = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_ER = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY2_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY3_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::W_PER_KG = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEG_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_1_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_1_2", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_3_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_3_2", "Lorg/orekit/utils/units/Unit;"));
              HECTO_PASCAL = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HECTO_PASCAL", "Lorg/orekit/utils/units/Unit;"));
              HZ_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HZ_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KG_M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KG_M2", "Lorg/orekit/utils/units/Unit;"));
              KM2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM3_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM3_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S3 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S3", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S4", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS2", "Lorg/orekit/utils/units/Unit;"));
              M4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG2", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NANO_TESLA = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NANO_TESLA", "Lorg/orekit/utils/units/Unit;"));
              NB_PER_Y = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NB_PER_Y", "Lorg/orekit/utils/units/Unit;"));
              N_M = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M", "Lorg/orekit/utils/units/Unit;"));
              N_M_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M_S", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_ER = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_ER", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_S", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY2_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY2_SCALED", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY3_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY3_SCALED", "Lorg/orekit/utils/units/Unit;"));
              W_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "W_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_1_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_1_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_3_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_3_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HECTO_PASCAL", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HECTO_PASCAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HZ_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HZ_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KG_M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KG_M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM3_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM3_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S3", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NANO_TESLA", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NANO_TESLA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NB_PER_Y", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NB_PER_Y)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_ER", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_ER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY2_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY2_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY3_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY3_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "W_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::W_PER_KG)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
