#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Embedding::class$ = NULL;
        jmethodID *Embedding::mids$ = NULL;
        bool Embedding::live$ = false;

        jclass Embedding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Embedding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_toSpace_ac445dfe898b403a] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_toSubSpace_ac445dfe898b403a] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Embedding::toSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSpace_ac445dfe898b403a], a0.this$));
        }

        ::org::hipparchus::geometry::Point Embedding::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_ac445dfe898b403a], a0.this$));
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
      namespace partitioning {
        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args);
        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg);
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data);
        static PyGetSetDef t_Embedding__fields_[] = {
          DECLARE_GET_FIELD(t_Embedding, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Embedding__methods_[] = {
          DECLARE_METHOD(t_Embedding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Embedding, of_, METH_VARARGS),
          DECLARE_METHOD(t_Embedding, toSpace, METH_O),
          DECLARE_METHOD(t_Embedding, toSubSpace, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Embedding)[] = {
          { Py_tp_methods, t_Embedding__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Embedding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Embedding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Embedding, t_Embedding, Embedding);
        PyObject *t_Embedding::wrap_Object(const Embedding& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Embedding::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Embedding::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Embedding *self = (t_Embedding *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Embedding::install(PyObject *module)
        {
          installType(&PY_TYPE(Embedding), &PY_TYPE_DEF(Embedding), module, "Embedding", 0);
        }

        void t_Embedding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "class_", make_descriptor(Embedding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "wrapfn_", make_descriptor(t_Embedding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Embedding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Embedding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Embedding::initializeClass, 1)))
            return NULL;
          return t_Embedding::wrap_Object(Embedding(((t_Embedding *) arg)->object.this$));
        }
        static PyObject *t_Embedding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Embedding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Embedding_of_(t_Embedding *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Embedding_toSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
          return NULL;
        }

        static PyObject *t_Embedding_toSubSpace(t_Embedding *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.toSubSpace(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
          return NULL;
        }
        static PyObject *t_Embedding_get__parameters_(t_Embedding *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricFieldGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricFieldGaussIntegrator::mids$ = NULL;
          bool SymmetricFieldGaussIntegrator::live$ = false;

          jclass SymmetricFieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_832c28cb3cc4d660] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_44f58eee1ec38a36] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_integrate_b58480964e3d2510] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_832c28cb3cc4d660, a0.this$)) {}

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_44f58eee1ec38a36, a0.this$, a1.this$)) {}

          ::org::hipparchus::CalculusFieldElement SymmetricFieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_b58480964e3d2510], a0.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_SymmetricFieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_SymmetricFieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SymmetricFieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricFieldGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricFieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricFieldGaussIntegrator_init_ },
            { Py_tp_getset, t_SymmetricFieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricFieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricFieldGaussIntegrator, t_SymmetricFieldGaussIntegrator, SymmetricFieldGaussIntegrator);
          PyObject *t_SymmetricFieldGaussIntegrator::wrap_Object(const SymmetricFieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SymmetricFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SymmetricFieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricFieldGaussIntegrator), &PY_TYPE_DEF(SymmetricFieldGaussIntegrator), module, "SymmetricFieldGaussIntegrator", 0);
          }

          void t_SymmetricFieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "class_", make_descriptor(SymmetricFieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricFieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricFieldGaussIntegrator::wrap_Object(SymmetricFieldGaussIntegrator(((t_SymmetricFieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SymmetricFieldGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnits::class$ = NULL;
            jmethodID *RangeUnits::mids$ = NULL;
            bool RangeUnits::live$ = false;
            RangeUnits *RangeUnits::RU = NULL;
            RangeUnits *RangeUnits::km = NULL;
            RangeUnits *RangeUnits::s = NULL;

            jclass RangeUnits::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnits");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_2574dd50cd569cdf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_values_a70b05554b1e71ea] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RU = new RangeUnits(env->getStaticObjectField(cls, "RU", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                km = new RangeUnits(env->getStaticObjectField(cls, "km", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                s = new RangeUnits(env->getStaticObjectField(cls, "s", "Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeUnits RangeUnits::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeUnits(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2574dd50cd569cdf], a0.this$));
            }

            JArray< RangeUnits > RangeUnits::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeUnits >(env->callStaticObjectMethod(cls, mids$[mid_values_a70b05554b1e71ea]));
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
          namespace tdm {
            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args);
            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeUnits_values(PyTypeObject *type);
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data);
            static PyGetSetDef t_RangeUnits__fields_[] = {
              DECLARE_GET_FIELD(t_RangeUnits, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeUnits__methods_[] = {
              DECLARE_METHOD(t_RangeUnits, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnits, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeUnits, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnits)[] = {
              { Py_tp_methods, t_RangeUnits__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeUnits__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnits)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeUnits, t_RangeUnits, RangeUnits);
            PyObject *t_RangeUnits::wrap_Object(const RangeUnits& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeUnits::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeUnits::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeUnits *self = (t_RangeUnits *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeUnits::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnits), &PY_TYPE_DEF(RangeUnits), module, "RangeUnits", 0);
            }

            void t_RangeUnits::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "class_", make_descriptor(RangeUnits::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "wrapfn_", make_descriptor(t_RangeUnits::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeUnits::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "RU", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::RU)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "km", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::km)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnits), "s", make_descriptor(t_RangeUnits::wrap_Object(*RangeUnits::s)));
            }

            static PyObject *t_RangeUnits_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnits::initializeClass, 1)))
                return NULL;
              return t_RangeUnits::wrap_Object(RangeUnits(((t_RangeUnits *) arg)->object.this$));
            }
            static PyObject *t_RangeUnits_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnits::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnits_of_(t_RangeUnits *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeUnits_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeUnits result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::valueOf(a0));
                return t_RangeUnits::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeUnits_values(PyTypeObject *type)
            {
              JArray< RangeUnits > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::values());
              return JArray<jobject>(result.this$).wrap(t_RangeUnits::wrap_jobject);
            }
            static PyObject *t_RangeUnits_get__parameters_(t_RangeUnits *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventSlopeFilter.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5312591dbdb35876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_9afb3f6694da2222] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_cb91cc07e2d54452] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5312591dbdb35876, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9afb3f6694da2222]));
        }

        void FieldEventSlopeFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseAbstractUnivariateSolver::class$ = NULL;
        jmethodID *BaseAbstractUnivariateSolver::mids$ = NULL;
        bool BaseAbstractUnivariateSolver::live$ = false;

        jclass BaseAbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_getStartValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_solve_f359ce7f50720544] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_5e6ae88ca7503288] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_5ec58f5d7d8b216f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_incrementEvaluationCount_7ae3461a92a43152] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
            mids$[mid_computeObjectiveValue_0ba5fed9597b693e] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_verifyInterval_1d715fa3b7b756e1] = env->getMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_verifySequence_d0d6094fbd7015c5] = env->getMethodID(cls, "verifySequence", "(DDD)V");
            mids$[mid_isBracketing_a836bdf37f582c99] = env->getMethodID(cls, "isBracketing", "(DD)Z");
            mids$[mid_isSequence_15ea3a7b52896f96] = env->getMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_verifyBracketing_1d715fa3b7b756e1] = env->getMethodID(cls, "verifyBracketing", "(DD)V");
            mids$[mid_setup_70a5e0903bd9c7a8] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d]);
        }

        jint BaseAbstractUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jdouble BaseAbstractUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_456d9a2f64d6b28d]);
        }

        jdouble BaseAbstractUnivariateSolver::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_456d9a2f64d6b28d]);
        }

        jdouble BaseAbstractUnivariateSolver::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_456d9a2f64d6b28d]);
        }

        jdouble BaseAbstractUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d]);
        }

        jdouble BaseAbstractUnivariateSolver::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_456d9a2f64d6b28d]);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_f359ce7f50720544], a0, a1.this$, a2);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5e6ae88ca7503288], a0, a1.this$, a2, a3);
        }

        jdouble BaseAbstractUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5ec58f5d7d8b216f], a0, a1.this$, a2, a3, a4);
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
      namespace solvers {
        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self);
        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, max),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, min),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, startValue),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMax, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getMin, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateSolver, t_BaseAbstractUnivariateSolver, BaseAbstractUnivariateSolver);
        PyObject *t_BaseAbstractUnivariateSolver::wrap_Object(const BaseAbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractUnivariateSolver *self = (t_BaseAbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateSolver), &PY_TYPE_DEF(BaseAbstractUnivariateSolver), module, "BaseAbstractUnivariateSolver", 0);
        }

        void t_BaseAbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "class_", make_descriptor(BaseAbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateSolver::wrap_Object(BaseAbstractUnivariateSolver(((t_BaseAbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateSolver_of_(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getAbsoluteAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getEvaluations(t_BaseAbstractUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getFunctionValueAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMax(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getMin(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getRelativeAccuracy(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_getStartValue(t_BaseAbstractUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_solve(t_BaseAbstractUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractUnivariateSolver_get__parameters_(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__absoluteAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__evaluations(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__functionValueAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__max(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__min(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__relativeAccuracy(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateSolver_get__startValue(t_BaseAbstractUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_66a2f071e6ed0c06] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/SpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_66a2f071e6ed0c06], a0.this$);
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
      namespace events {
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHIJjsPolynomials::class$ = NULL;
            jmethodID *GHIJjsPolynomials::mids$ = NULL;
            bool GHIJjsPolynomials::live$ = false;

            jclass GHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_getGjs_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getGjs", "(II)D");
                mids$[mid_getHjs_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getHjs", "(II)D");
                mids$[mid_getIjs_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getIjs", "(II)D");
                mids$[mid_getJjs_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getJjs", "(II)D");
                mids$[mid_getdGjsdAlpha_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdGjsdAlpha", "(II)D");
                mids$[mid_getdGjsdBeta_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdGjsdBeta", "(II)D");
                mids$[mid_getdGjsdh_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdGjsdh", "(II)D");
                mids$[mid_getdGjsdk_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdGjsdk", "(II)D");
                mids$[mid_getdHjsdAlpha_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdHjsdAlpha", "(II)D");
                mids$[mid_getdHjsdBeta_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdHjsdBeta", "(II)D");
                mids$[mid_getdHjsdh_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdHjsdh", "(II)D");
                mids$[mid_getdHjsdk_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdHjsdk", "(II)D");
                mids$[mid_getdIjsdAlpha_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdIjsdAlpha", "(II)D");
                mids$[mid_getdIjsdBeta_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdIjsdBeta", "(II)D");
                mids$[mid_getdIjsdh_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdIjsdh", "(II)D");
                mids$[mid_getdIjsdk_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdIjsdk", "(II)D");
                mids$[mid_getdJjsdAlpha_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdJjsdAlpha", "(II)D");
                mids$[mid_getdJjsdBeta_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdJjsdBeta", "(II)D");
                mids$[mid_getdJjsdh_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdJjsdh", "(II)D");
                mids$[mid_getdJjsdk_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdJjsdk", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHIJjsPolynomials::GHIJjsPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

            jdouble GHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGjs_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHjs_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIjs_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getJjs_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdAlpha_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdBeta_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdh_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGjsdk_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdAlpha_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdBeta_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdh_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHjsdk_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdAlpha_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdBeta_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdh_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdIjsdk_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdAlpha_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdBeta_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdh_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble GHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdJjsdk_a84e4ee1da3f1ab8], a0, a1);
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
            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args);

            static PyMethodDef t_GHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHIJjsPolynomials)[] = {
              { Py_tp_methods, t_GHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHIJjsPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHIJjsPolynomials, t_GHIJjsPolynomials, GHIJjsPolynomials);

            void t_GHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHIJjsPolynomials), &PY_TYPE_DEF(GHIJjsPolynomials), module, "GHIJjsPolynomials", 0);
            }

            void t_GHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "class_", make_descriptor(GHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "wrapfn_", make_descriptor(t_GHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHIJjsPolynomials::wrap_Object(GHIJjsPolynomials(((t_GHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHIJjsPolynomials_init_(t_GHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHIJjsPolynomials_getGjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getHjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getIjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getJjs(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdGjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdHjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdIjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdAlpha(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdBeta(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdh(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_GHIJjsPolynomials_getdJjsdk(t_GHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
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
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver::class$ = NULL;
        jmethodID *BracketedUnivariateSolver::mids$ = NULL;
        bool BracketedUnivariateSolver::live$ = false;

        jclass BracketedUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_0c4af17577847ef5] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_d096fb40d6053e92] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_b498db826ca35455] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_solveInterval_f22794092f257ec3] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_0c4af17577847ef5], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_d096fb40d6053e92], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_b498db826ca35455], a0, a1.this$, a2, a3));
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_f22794092f257ec3], a0, a1.this$, a2, a3, a4));
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
      namespace solvers {
        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver, t_BracketedUnivariateSolver, BracketedUnivariateSolver);
        PyObject *t_BracketedUnivariateSolver::wrap_Object(const BracketedUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver), &PY_TYPE_DEF(BracketedUnivariateSolver), module, "BracketedUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedUnivariateSolver$Interval)));
        }

        void t_BracketedUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "class_", make_descriptor(BracketedUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver::wrap_Object(BracketedUnivariateSolver(((t_BracketedUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BracketedUnivariateSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractStateCovarianceInterpolator::class$ = NULL;
      jmethodID *AbstractStateCovarianceInterpolator::mids$ = NULL;
      bool AbstractStateCovarianceInterpolator::live$ = false;
      jint AbstractStateCovarianceInterpolator::COLUMN_DIM = (jint) 0;
      ::org::orekit::orbits::PositionAngleType *AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE = NULL;
      jint AbstractStateCovarianceInterpolator::ROW_DIM = (jint) 0;

      jclass AbstractStateCovarianceInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractStateCovarianceInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_53d3b37d6afa71f2] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_188af64307fce771] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getOrbitInterpolator_c8e4b57f7805ef06] = env->getMethodID(cls, "getOrbitInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getOutFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getOutLOF_c33b33ba21325973] = env->getMethodID(cls, "getOutLOF", "()Lorg/orekit/frames/LOFType;");
          mids$[mid_getOutOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOutOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getOutPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getOutPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_interpolate_f2937e7cc04da0bf] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedPair;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_9c0671e111b7adfc] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_interpolateOrbit_dd1bd6ffac89e4c5] = env->getMethodID(cls, "interpolateOrbit", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_expressCovarianceInDesiredOutput_0a807921458325db] = env->getMethodID(cls, "expressCovarianceInDesiredOutput", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/time/TimeStampedPair;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COLUMN_DIM = env->getStaticIntField(cls, "COLUMN_DIM");
          DEFAULT_POSITION_ANGLE = new ::org::orekit::orbits::PositionAngleType(env->getStaticObjectField(cls, "DEFAULT_POSITION_ANGLE", "Lorg/orekit/orbits/PositionAngleType;"));
          ROW_DIM = env->getStaticIntField(cls, "ROW_DIM");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_53d3b37d6afa71f2, a0, a1, a2.this$, a3.this$)) {}

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_188af64307fce771, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::TimeInterpolator AbstractStateCovarianceInterpolator::getOrbitInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_c8e4b57f7805ef06]));
      }

      ::org::orekit::frames::Frame AbstractStateCovarianceInterpolator::getOutFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::LOFType AbstractStateCovarianceInterpolator::getOutLOF() const
      {
        return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getOutLOF_c33b33ba21325973]));
      }

      ::org::orekit::orbits::OrbitType AbstractStateCovarianceInterpolator::getOutOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOutOrbitType_63ea5cd020bf7bf1]));
      }

      ::org::orekit::orbits::PositionAngleType AbstractStateCovarianceInterpolator::getOutPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getOutPositionAngleType_2571e8fe1cede425]));
      }

      ::org::orekit::time::TimeStampedPair AbstractStateCovarianceInterpolator::interpolate(const ::org::orekit::time::AbstractTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::time::TimeStampedPair(env->callObjectMethod(this$, mids$[mid_interpolate_f2937e7cc04da0bf], a0.this$));
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
      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyGetSetDef t_AbstractStateCovarianceInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outFrame),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outLOF),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outOrbitType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outPositionAngleType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractStateCovarianceInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutLOF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractStateCovarianceInterpolator)[] = {
        { Py_tp_methods, t_AbstractStateCovarianceInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractStateCovarianceInterpolator_init_ },
        { Py_tp_getset, t_AbstractStateCovarianceInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractStateCovarianceInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractStateCovarianceInterpolator, t_AbstractStateCovarianceInterpolator, AbstractStateCovarianceInterpolator);
      PyObject *t_AbstractStateCovarianceInterpolator::wrap_Object(const AbstractStateCovarianceInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractStateCovarianceInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractStateCovarianceInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractStateCovarianceInterpolator), &PY_TYPE_DEF(AbstractStateCovarianceInterpolator), module, "AbstractStateCovarianceInterpolator", 0);
      }

      void t_AbstractStateCovarianceInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "class_", make_descriptor(AbstractStateCovarianceInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "wrapfn_", make_descriptor(t_AbstractStateCovarianceInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractStateCovarianceInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "COLUMN_DIM", make_descriptor(AbstractStateCovarianceInterpolator::COLUMN_DIM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "DEFAULT_POSITION_ANGLE", make_descriptor(::org::orekit::orbits::t_PositionAngleType::wrap_Object(*AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "ROW_DIM", make_descriptor(AbstractStateCovarianceInterpolator::ROW_DIM));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractStateCovarianceInterpolator::wrap_Object(AbstractStateCovarianceInterpolator(((t_AbstractStateCovarianceInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::LOFType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbstractTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeStampedPair result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::time::t_TimeStampedPair::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit), ::org::orekit::propagation::PY_TYPE(StateCovariance));
        }

        return callSuper(PY_TYPE(AbstractStateCovarianceInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::LOFType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BoundaryProjection::class$ = NULL;
        jmethodID *BoundaryProjection::mids$ = NULL;
        bool BoundaryProjection::live$ = false;

        jclass BoundaryProjection::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BoundaryProjection");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e44c205add2d5955] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;Lorg/hipparchus/geometry/Point;D)V");
            mids$[mid_getOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getOffset", "()D");
            mids$[mid_getOriginal_268784e47ab908a6] = env->getMethodID(cls, "getOriginal", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getProjected_268784e47ab908a6] = env->getMethodID(cls, "getProjected", "()Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BoundaryProjection::BoundaryProjection(const ::org::hipparchus::geometry::Point & a0, const ::org::hipparchus::geometry::Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e44c205add2d5955, a0.this$, a1.this$, a2)) {}

        jdouble BoundaryProjection::getOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getOriginal() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getOriginal_268784e47ab908a6]));
        }

        ::org::hipparchus::geometry::Point BoundaryProjection::getProjected() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getProjected_268784e47ab908a6]));
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
      namespace partitioning {
        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args);
        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self);
        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data);
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data);
        static PyGetSetDef t_BoundaryProjection__fields_[] = {
          DECLARE_GET_FIELD(t_BoundaryProjection, offset),
          DECLARE_GET_FIELD(t_BoundaryProjection, original),
          DECLARE_GET_FIELD(t_BoundaryProjection, projected),
          DECLARE_GET_FIELD(t_BoundaryProjection, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BoundaryProjection__methods_[] = {
          DECLARE_METHOD(t_BoundaryProjection, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BoundaryProjection, of_, METH_VARARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOffset, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_BoundaryProjection, getProjected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BoundaryProjection)[] = {
          { Py_tp_methods, t_BoundaryProjection__methods_ },
          { Py_tp_init, (void *) t_BoundaryProjection_init_ },
          { Py_tp_getset, t_BoundaryProjection__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BoundaryProjection)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BoundaryProjection, t_BoundaryProjection, BoundaryProjection);
        PyObject *t_BoundaryProjection::wrap_Object(const BoundaryProjection& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BoundaryProjection::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BoundaryProjection::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BoundaryProjection *self = (t_BoundaryProjection *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BoundaryProjection::install(PyObject *module)
        {
          installType(&PY_TYPE(BoundaryProjection), &PY_TYPE_DEF(BoundaryProjection), module, "BoundaryProjection", 0);
        }

        void t_BoundaryProjection::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "class_", make_descriptor(BoundaryProjection::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "wrapfn_", make_descriptor(t_BoundaryProjection::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BoundaryProjection), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BoundaryProjection_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BoundaryProjection::initializeClass, 1)))
            return NULL;
          return t_BoundaryProjection::wrap_Object(BoundaryProjection(((t_BoundaryProjection *) arg)->object.this$));
        }
        static PyObject *t_BoundaryProjection_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BoundaryProjection::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BoundaryProjection_of_(t_BoundaryProjection *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BoundaryProjection_init_(t_BoundaryProjection *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          BoundaryProjection object((jobject) NULL);

          if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &p1, ::org::hipparchus::geometry::t_Point::parameters_, &a2))
          {
            INT_CALL(object = BoundaryProjection(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BoundaryProjection_getOffset(t_BoundaryProjection *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BoundaryProjection_getOriginal(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BoundaryProjection_getProjected(t_BoundaryProjection *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_BoundaryProjection_get__parameters_(t_BoundaryProjection *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BoundaryProjection_get__offset(t_BoundaryProjection *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOffset());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BoundaryProjection_get__original(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_BoundaryProjection_get__projected(t_BoundaryProjection *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getProjected());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "java/lang/Exception.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken::class$ = NULL;
            jmethodID *ParseToken::mids$ = NULL;
            bool ParseToken::live$ = false;

            jclass ParseToken::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2664145c2f93a295] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/lexical/TokenType;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;ILjava/lang/String;)V");
                mids$[mid_generateException_13c04dd3f735d81a] = env->getMethodID(cls, "generateException", "(Ljava/lang/Exception;)Lorg/orekit/errors/OrekitException;");
                mids$[mid_getContentAsBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "getContentAsBoolean", "()Z");
                mids$[mid_getContentAsDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "getContentAsDouble", "()D");
                mids$[mid_getContentAsEnum_b8da8b286eb9770c] = env->getMethodID(cls, "getContentAsEnum", "(Ljava/lang/Class;)Ljava/lang/Enum;");
                mids$[mid_getContentAsEnumList_d43d3f945a8de36f] = env->getMethodID(cls, "getContentAsEnumList", "(Ljava/lang/Class;)Ljava/util/List;");
                mids$[mid_getContentAsFreeTextList_a6156df500549a58] = env->getMethodID(cls, "getContentAsFreeTextList", "()Ljava/util/List;");
                mids$[mid_getContentAsInt_f2f64475e4580546] = env->getMethodID(cls, "getContentAsInt", "()I");
                mids$[mid_getContentAsNormalizedList_a6156df500549a58] = env->getMethodID(cls, "getContentAsNormalizedList", "()Ljava/util/List;");
                mids$[mid_getContentAsNormalizedString_0090f7797e403f43] = env->getMethodID(cls, "getContentAsNormalizedString", "()Ljava/lang/String;");
                mids$[mid_getContentAsUppercaseCharacter_29e026b9d068f1c7] = env->getMethodID(cls, "getContentAsUppercaseCharacter", "()C");
                mids$[mid_getContentAsUppercaseList_a6156df500549a58] = env->getMethodID(cls, "getContentAsUppercaseList", "()Ljava/util/List;");
                mids$[mid_getContentAsUppercaseString_0090f7797e403f43] = env->getMethodID(cls, "getContentAsUppercaseString", "()Ljava/lang/String;");
                mids$[mid_getContentAsVector_17a952530a808943] = env->getMethodID(cls, "getContentAsVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getFileName_0090f7797e403f43] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
                mids$[mid_getLineNumber_f2f64475e4580546] = env->getMethodID(cls, "getLineNumber", "()I");
                mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                mids$[mid_getRawContent_0090f7797e403f43] = env->getMethodID(cls, "getRawContent", "()Ljava/lang/String;");
                mids$[mid_getType_a288b82527ddd2de] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_getUnits_196b004fd4585106] = env->getMethodID(cls, "getUnits", "()Lorg/orekit/utils/units/Unit;");
                mids$[mid_processAsBoolean_15e3c92b59d60e20] = env->getMethodID(cls, "processAsBoolean", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer;)Z");
                mids$[mid_processAsCenter_4b3fc7dc27a085ce] = env->getMethodID(cls, "processAsCenter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsCenterList_42e5d18386cfa025] = env->getMethodID(cls, "processAsCenterList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsDate_c531de3c386ab684] = env->getMethodID(cls, "processAsDate", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;)Z");
                mids$[mid_processAsDouble_0cc02a116ac8c243] = env->getMethodID(cls, "processAsDouble", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer;)Z");
                mids$[mid_processAsDoubleArray_614ded53782c6336] = env->getMethodID(cls, "processAsDoubleArray", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer;)Z");
                mids$[mid_processAsDoublyIndexedDouble_260d1494eea93a24] = env->getMethodID(cls, "processAsDoublyIndexedDouble", "(IILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer;)Z");
                mids$[mid_processAsEnum_d8a3ec2e7453cbca] = env->getMethodID(cls, "processAsEnum", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer;)Z");
                mids$[mid_processAsEnumsList_34e4b46279e3b834] = env->getMethodID(cls, "processAsEnumsList", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer;)Z");
                mids$[mid_processAsFrame_c70f6f373d5ea624] = env->getMethodID(cls, "processAsFrame", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;ZZZ)Z");
                mids$[mid_processAsFreeTextList_20dbcf5ca848e6b5] = env->getMethodID(cls, "processAsFreeTextList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsFreeTextString_974496867228e5d2] = env->getMethodID(cls, "processAsFreeTextString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsIndexedDouble_0252974c60172882] = env->getMethodID(cls, "processAsIndexedDouble", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer;)Z");
                mids$[mid_processAsIndexedDoubleArray_6b5a9e66ea49b585] = env->getMethodID(cls, "processAsIndexedDoubleArray", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer;)Z");
                mids$[mid_processAsIndexedInteger_a0b75e58313e981b] = env->getMethodID(cls, "processAsIndexedInteger", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer;)Z");
                mids$[mid_processAsIndexedNormalizedString_62517abf6f494077] = env->getMethodID(cls, "processAsIndexedNormalizedString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsIndexedUppercaseString_62517abf6f494077] = env->getMethodID(cls, "processAsIndexedUppercaseString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsInteger_2328198f978a2786] = env->getMethodID(cls, "processAsInteger", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer;)Z");
                mids$[mid_processAsIntegerArray_c4b7278debc335e6] = env->getMethodID(cls, "processAsIntegerArray", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsIntegerArrayNoSpace_c4b7278debc335e6] = env->getMethodID(cls, "processAsIntegerArrayNoSpace", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsLabeledDouble_e0c1fada55cd206b] = env->getMethodID(cls, "processAsLabeledDouble", "(CLorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer;)Z");
                mids$[mid_processAsManeuvrableEnum_a5401db6566584fc] = env->getMethodID(cls, "processAsManeuvrableEnum", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer;)Z");
                mids$[mid_processAsNormalizedCharacter_e84975a52a49ada8] = env->getMethodID(cls, "processAsNormalizedCharacter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer;)Z");
                mids$[mid_processAsNormalizedList_20dbcf5ca848e6b5] = env->getMethodID(cls, "processAsNormalizedList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsNormalizedString_974496867228e5d2] = env->getMethodID(cls, "processAsNormalizedString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsRotationOrder_d9bf1bd440a4c4ed] = env->getMethodID(cls, "processAsRotationOrder", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer;)Z");
                mids$[mid_processAsTimeSystem_2051b0414bb5b9fc] = env->getMethodID(cls, "processAsTimeSystem", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer;)Z");
                mids$[mid_processAsUnitList_6169013488c8f5d8] = env->getMethodID(cls, "processAsUnitList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer;)Z");
                mids$[mid_processAsUppercaseList_20dbcf5ca848e6b5] = env->getMethodID(cls, "processAsUppercaseList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsUppercaseString_974496867228e5d2] = env->getMethodID(cls, "processAsUppercaseString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsVector_dfdac999eabaf91b] = env->getMethodID(cls, "processAsVector", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ParseToken::ParseToken(const ::org::orekit::files::ccsds::utils::lexical::TokenType & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::utils::units::Unit & a3, jint a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2664145c2f93a295, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::orekit::errors::OrekitException ParseToken::generateException(const ::java::lang::Exception & a0) const
            {
              return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_generateException_13c04dd3f735d81a], a0.this$));
            }

            jboolean ParseToken::getContentAsBoolean() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getContentAsBoolean_e470b6d9e0d979db]);
            }

            jdouble ParseToken::getContentAsDouble() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getContentAsDouble_456d9a2f64d6b28d]);
            }

            ::java::lang::Enum ParseToken::getContentAsEnum(const ::java::lang::Class & a0) const
            {
              return ::java::lang::Enum(env->callObjectMethod(this$, mids$[mid_getContentAsEnum_b8da8b286eb9770c], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsEnumList(const ::java::lang::Class & a0) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsEnumList_d43d3f945a8de36f], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsFreeTextList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsFreeTextList_a6156df500549a58]));
            }

            jint ParseToken::getContentAsInt() const
            {
              return env->callIntMethod(this$, mids$[mid_getContentAsInt_f2f64475e4580546]);
            }

            ::java::util::List ParseToken::getContentAsNormalizedList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedList_a6156df500549a58]));
            }

            ::java::lang::String ParseToken::getContentAsNormalizedString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedString_0090f7797e403f43]));
            }

            jchar ParseToken::getContentAsUppercaseCharacter() const
            {
              return env->callCharMethod(this$, mids$[mid_getContentAsUppercaseCharacter_29e026b9d068f1c7]);
            }

            ::java::util::List ParseToken::getContentAsUppercaseList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseList_a6156df500549a58]));
            }

            ::java::lang::String ParseToken::getContentAsUppercaseString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseString_0090f7797e403f43]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D ParseToken::getContentAsVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getContentAsVector_17a952530a808943]));
            }

            ::java::lang::String ParseToken::getFileName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_0090f7797e403f43]));
            }

            jint ParseToken::getLineNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLineNumber_f2f64475e4580546]);
            }

            ::java::lang::String ParseToken::getName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
            }

            ::java::lang::String ParseToken::getRawContent() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRawContent_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::utils::lexical::TokenType ParseToken::getType() const
            {
              return ::org::orekit::files::ccsds::utils::lexical::TokenType(env->callObjectMethod(this$, mids$[mid_getType_a288b82527ddd2de]));
            }

            ::org::orekit::utils::units::Unit ParseToken::getUnits() const
            {
              return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_196b004fd4585106]));
            }

            jboolean ParseToken::processAsBoolean(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsBoolean_15e3c92b59d60e20], a0.this$);
            }

            jboolean ParseToken::processAsCenter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenter_4b3fc7dc27a085ce], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsCenterList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenterList_42e5d18386cfa025], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDate(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDate_c531de3c386ab684], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDouble(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDouble_0cc02a116ac8c243], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoubleArray(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoubleArray_614ded53782c6336], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoublyIndexedDouble(jint a0, jint a1, const ::org::orekit::utils::units::Unit & a2, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a3, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoublyIndexedDouble_260d1494eea93a24], a0, a1, a2.this$, a3.this$, a4.this$);
            }

            jboolean ParseToken::processAsEnum(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnum_d8a3ec2e7453cbca], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsEnumsList(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnumsList_34e4b46279e3b834], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsFrame(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, jboolean a2, jboolean a3, jboolean a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFrame_c70f6f373d5ea624], a0.this$, a1.this$, a2, a3, a4);
            }

            jboolean ParseToken::processAsFreeTextList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextList_20dbcf5ca848e6b5], a0.this$);
            }

            jboolean ParseToken::processAsFreeTextString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextString_974496867228e5d2], a0.this$);
            }

            jboolean ParseToken::processAsIndexedDouble(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDouble_0252974c60172882], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedDoubleArray(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDoubleArray_6b5a9e66ea49b585], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedInteger(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedInteger_a0b75e58313e981b], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedNormalizedString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedNormalizedString_62517abf6f494077], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedUppercaseString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedUppercaseString_62517abf6f494077], a0, a1.this$);
            }

            jboolean ParseToken::processAsInteger(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsInteger_2328198f978a2786], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArray(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArray_c4b7278debc335e6], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArrayNoSpace(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArrayNoSpace_c4b7278debc335e6], a0.this$);
            }

            jboolean ParseToken::processAsLabeledDouble(jchar a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsLabeledDouble_e0c1fada55cd206b], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsManeuvrableEnum(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsManeuvrableEnum_a5401db6566584fc], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedCharacter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedCharacter_e84975a52a49ada8], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedList_20dbcf5ca848e6b5], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedString_974496867228e5d2], a0.this$);
            }

            jboolean ParseToken::processAsRotationOrder(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsRotationOrder_d9bf1bd440a4c4ed], a0.this$);
            }

            jboolean ParseToken::processAsTimeSystem(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsTimeSystem_2051b0414bb5b9fc], a0.this$);
            }

            jboolean ParseToken::processAsUnitList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUnitList_6169013488c8f5d8], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseList_20dbcf5ca848e6b5], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseString_974496867228e5d2], a0.this$);
            }

            jboolean ParseToken::processAsVector(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsVector_dfdac999eabaf91b], a0.this$, a1.this$, a2.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self);
            static PyObject *t_ParseToken_getFileName(t_ParseToken *self);
            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self);
            static PyObject *t_ParseToken_getName(t_ParseToken *self);
            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self);
            static PyObject *t_ParseToken_getType(t_ParseToken *self);
            static PyObject *t_ParseToken_getUnits(t_ParseToken *self);
            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data);
            static PyGetSetDef t_ParseToken__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken, contentAsBoolean),
              DECLARE_GET_FIELD(t_ParseToken, contentAsDouble),
              DECLARE_GET_FIELD(t_ParseToken, contentAsFreeTextList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsInt),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseCharacter),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsVector),
              DECLARE_GET_FIELD(t_ParseToken, fileName),
              DECLARE_GET_FIELD(t_ParseToken, lineNumber),
              DECLARE_GET_FIELD(t_ParseToken, name),
              DECLARE_GET_FIELD(t_ParseToken, rawContent),
              DECLARE_GET_FIELD(t_ParseToken, type),
              DECLARE_GET_FIELD(t_ParseToken, units),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken__methods_[] = {
              DECLARE_METHOD(t_ParseToken, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, generateException, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsBoolean, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsDouble, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsEnumList, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsFreeTextList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsInt, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseCharacter, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsVector, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getFileName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getLineNumber, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getRawContent, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getType, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getUnits, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, processAsBoolean, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsCenter, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsCenterList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDate, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoublyIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnum, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnumsList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFrame, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedInteger, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedNormalizedString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedUppercaseString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsInteger, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArray, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArrayNoSpace, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsLabeledDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsManeuvrableEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedCharacter, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsRotationOrder, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsTimeSystem, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUnitList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsVector, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken)[] = {
              { Py_tp_methods, t_ParseToken__methods_ },
              { Py_tp_init, (void *) t_ParseToken_init_ },
              { Py_tp_getset, t_ParseToken__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken, t_ParseToken, ParseToken);

            void t_ParseToken::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken), &PY_TYPE_DEF(ParseToken), module, "ParseToken", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "ManeuvrableConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$ManeuvrableConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "UnitListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$UnitListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "RotationOrderConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$RotationOrderConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "FrameConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$FrameConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "TimeSystemConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$TimeSystemConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DateConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DateConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "VectorConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$VectorConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoublyIndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "LabeledDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CharConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CharConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntegerArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntegerArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedIntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedIntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "BooleanConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$BooleanConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedStringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedStringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringConsumer)));
            }

            void t_ParseToken::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "class_", make_descriptor(ParseToken::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "wrapfn_", make_descriptor(t_ParseToken::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken::initializeClass, 1)))
                return NULL;
              return t_ParseToken::wrap_Object(ParseToken(((t_ParseToken *) arg)->object.this$));
            }
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::utils::units::Unit a3((jobject) NULL);
              jint a4;
              ::java::lang::String a5((jobject) NULL);
              ParseToken object((jobject) NULL);

              if (!parseArgs(args, "KsskIs", ::org::orekit::files::ccsds::utils::lexical::TokenType::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_TokenType::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ParseToken(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Exception a0((jobject) NULL);
              ::org::orekit::errors::OrekitException result((jobject) NULL);

              if (!parseArg(arg, "k", ::java::lang::Exception::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateException(a0));
                return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateException", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnum(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Enum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnumList(a0));
                return ::java::util::t_List::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnumList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getContentAsInt());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self)
            {
              jchar result;
              OBJ_CALL(result = self->object.getContentAsUppercaseCharacter());
              return c2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getFileName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLineNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRawContent());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getType(t_ParseToken *self)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getUnits(t_ParseToken *self)
            {
              ::org::orekit::utils::units::Unit result((jobject) NULL);
              OBJ_CALL(result = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsBoolean(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsBoolean", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenter(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenter", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenterList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenterList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsDate(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDate", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDouble(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDoubleArray(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IIkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.processAsDoublyIndexedDouble(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoublyIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnum(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnum", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumListConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnumsList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnumsList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean a2;
              jboolean a3;
              jboolean a4;
              jboolean result;

              if (!parseArgs(args, "kkZZZ", ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.processAsFrame(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFrame", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDoubleArray(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedInteger(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedInteger", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedNormalizedString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedNormalizedString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedUppercaseString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedUppercaseString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsInteger(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsInteger", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArray(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArray", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArrayNoSpace(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArrayNoSpace", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args)
            {
              jchar a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "CkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsLabeledDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsLabeledDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsManeuvrableEnum(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsManeuvrableEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedCharacter(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedCharacter", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsRotationOrder(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsRotationOrder", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsTimeSystem(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUnitList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUnitList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsVector(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsVector", args);
              return NULL;
            }

            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getContentAsInt());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data)
            {
              jchar value;
              OBJ_CALL(value = self->object.getContentAsUppercaseCharacter());
              return c2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLineNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRawContent());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data)
            {
              ::org::orekit::utils::units::Unit value((jobject) NULL);
              OBJ_CALL(value = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LocalizedStatFormats::class$ = NULL;
      jmethodID *LocalizedStatFormats::mids$ = NULL;
      bool LocalizedStatFormats::live$ = false;
      LocalizedStatFormats *LocalizedStatFormats::COVARIANCE_MATRIX = NULL;
      LocalizedStatFormats *LocalizedStatFormats::ILLEGAL_STATE_PCA = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NO_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TIES_ARE_NOT_ALLOWED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TOO_MANY_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = NULL;

      jclass LocalizedStatFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LocalizedStatFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_fec3bc42d3b5f4aa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/LocalizedStatFormats;");
          mids$[mid_values_d759febbc1f92aa8] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/LocalizedStatFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COVARIANCE_MATRIX = new LocalizedStatFormats(env->getStaticObjectField(cls, "COVARIANCE_MATRIX", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          ILLEGAL_STATE_PCA = new LocalizedStatFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE_PCA", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INSUFFICIENT_DATA_FOR_T_STATISTIC = new LocalizedStatFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA_FOR_T_STATISTIC", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INVALID_REGRESSION_OBSERVATION = new LocalizedStatFormats(env->getStaticObjectField(cls, "INVALID_REGRESSION_OBSERVATION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_REGRESSION = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_REGRESSION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_SUPPORTED_NAN_STRATEGY = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_NAN_STRATEGY", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NO_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NO_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_CONFIDENCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_QUANTILE_VALUE = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_QUANTILE_VALUE", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUND_SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TIES_ARE_NOT_ALLOWED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TIES_ARE_NOT_ALLOWED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TOO_MANY_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "TOO_MANY_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_CATEGORIES_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_CATEGORIES_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedStatFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String LocalizedStatFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      LocalizedStatFormats LocalizedStatFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedStatFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fec3bc42d3b5f4aa], a0.this$));
      }

      JArray< LocalizedStatFormats > LocalizedStatFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedStatFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_d759febbc1f92aa8]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args);
      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self);
      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data);
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data);
      static PyGetSetDef t_LocalizedStatFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedStatFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedStatFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedStatFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedStatFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedStatFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedStatFormats)[] = {
        { Py_tp_methods, t_LocalizedStatFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedStatFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedStatFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedStatFormats, t_LocalizedStatFormats, LocalizedStatFormats);
      PyObject *t_LocalizedStatFormats::wrap_Object(const LocalizedStatFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedStatFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedStatFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedStatFormats), &PY_TYPE_DEF(LocalizedStatFormats), module, "LocalizedStatFormats", 0);
      }

      void t_LocalizedStatFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "class_", make_descriptor(LocalizedStatFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "wrapfn_", make_descriptor(t_LocalizedStatFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedStatFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "COVARIANCE_MATRIX", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::COVARIANCE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "ILLEGAL_STATE_PCA", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::ILLEGAL_STATE_PCA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INSUFFICIENT_DATA_FOR_T_STATISTIC", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INVALID_REGRESSION_OBSERVATION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_REGRESSION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_SUPPORTED_NAN_STRATEGY", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NO_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NO_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_QUANTILE_VALUE", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TIES_ARE_NOT_ALLOWED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TIES_ARE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TOO_MANY_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TOO_MANY_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_CATEGORIES_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED)));
      }

      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedStatFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedStatFormats::wrap_Object(LocalizedStatFormats(((t_LocalizedStatFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedStatFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedStatFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::valueOf(a0));
          return t_LocalizedStatFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedStatFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedStatFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFileParser.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFileParser::class$ = NULL;
        jmethodID *STKEphemerisFileParser::mids$ = NULL;
        bool STKEphemerisFileParser::live$ = false;

        jclass STKEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_215ab401d558349e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/time/UTCScale;Ljava/util/Map;)V");
            mids$[mid_parse_86ef8eab0eac0cc7] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/stk/STKEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFileParser::STKEphemerisFileParser(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::time::UTCScale & a2, const ::java::util::Map & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_215ab401d558349e, a0.this$, a1, a2.this$, a3.this$)) {}

        ::org::orekit::files::stk::STKEphemerisFile STKEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::stk::STKEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_86ef8eab0eac0cc7], a0.this$));
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
      namespace stk {
        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg);

        static PyMethodDef t_STKEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFileParser)[] = {
          { Py_tp_methods, t_STKEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFileParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFileParser, t_STKEphemerisFileParser, STKEphemerisFileParser);

        void t_STKEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFileParser), &PY_TYPE_DEF(STKEphemerisFileParser), module, "STKEphemerisFileParser", 0);
        }

        void t_STKEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "class_", make_descriptor(STKEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "wrapfn_", make_descriptor(t_STKEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFileParser::wrap_Object(STKEphemerisFileParser(((t_STKEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFileParser_init_(t_STKEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::UTCScale a2((jobject) NULL);
          ::java::util::Map a3((jobject) NULL);
          PyTypeObject **p3;
          STKEphemerisFileParser object((jobject) NULL);

          if (!parseArgs(args, "sDkK", ::org::orekit::time::UTCScale::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = STKEphemerisFileParser(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFileParser_parse(t_STKEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::stk::t_STKEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegratorFactory::class$ = NULL;
          jmethodID *FieldGaussIntegratorFactory::mids$ = NULL;
          bool FieldGaussIntegratorFactory::live$ = false;

          jclass FieldGaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_hermite_e199d499df8e4c14] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator;");
              mids$[mid_laguerre_48624930c7529b05] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_48624930c7529b05] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");
              mids$[mid_legendre_50b4ec78e096e5af] = env->getMethodID(cls, "legendre", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/integration/gauss/FieldGaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegratorFactory::FieldGaussIntegratorFactory(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator FieldGaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_e199d499df8e4c14], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_48624930c7529b05], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_48624930c7529b05], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator FieldGaussIntegratorFactory::legendre(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_50b4ec78e096e5af], a0, a1.this$, a2.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data);
          static PyGetSetDef t_FieldGaussIntegratorFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegratorFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegratorFactory, legendre, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegratorFactory)[] = {
            { Py_tp_methods, t_FieldGaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegratorFactory_init_ },
            { Py_tp_getset, t_FieldGaussIntegratorFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegratorFactory, t_FieldGaussIntegratorFactory, FieldGaussIntegratorFactory);
          PyObject *t_FieldGaussIntegratorFactory::wrap_Object(const FieldGaussIntegratorFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegratorFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegratorFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegratorFactory *self = (t_FieldGaussIntegratorFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegratorFactory), &PY_TYPE_DEF(FieldGaussIntegratorFactory), module, "FieldGaussIntegratorFactory", 0);
          }

          void t_FieldGaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "class_", make_descriptor(FieldGaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "wrapfn_", make_descriptor(t_FieldGaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegratorFactory::wrap_Object(FieldGaussIntegratorFactory(((t_FieldGaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegratorFactory_of_(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegratorFactory_init_(t_FieldGaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldGaussIntegratorFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldGaussIntegratorFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldGaussIntegratorFactory_hermite(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricFieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricFieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_laguerre(t_FieldGaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegratorFactory_legendre(t_FieldGaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 3:
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_FieldGaussIntegrator::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegratorFactory_get__parameters_(t_FieldGaussIntegratorFactory *self, void *data)
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
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BoundedAttitudeProvider::class$ = NULL;
      jmethodID *BoundedAttitudeProvider::mids$ = NULL;
      bool BoundedAttitudeProvider::live$ = false;

      jclass BoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data);
      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_BoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_BoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_BoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(BoundedAttitudeProvider, t_BoundedAttitudeProvider, BoundedAttitudeProvider);

      void t_BoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedAttitudeProvider), &PY_TYPE_DEF(BoundedAttitudeProvider), module, "BoundedAttitudeProvider", 0);
      }

      void t_BoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "class_", make_descriptor(BoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "wrapfn_", make_descriptor(t_BoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_BoundedAttitudeProvider::wrap_Object(BoundedAttitudeProvider(((t_BoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *BOBYQAOptimizer::class$ = NULL;
            jmethodID *BOBYQAOptimizer::mids$ = NULL;
            bool BOBYQAOptimizer::live$ = false;
            jdouble BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS = (jdouble) 0;
            jdouble BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS = (jdouble) 0;
            jint BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION = (jint) 0;

            jclass BOBYQAOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_13f7a72902bf1e20] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_doOptimize_f3368328259a5468] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INITIAL_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_INITIAL_RADIUS");
                DEFAULT_STOPPING_RADIUS = env->getStaticDoubleField(cls, "DEFAULT_STOPPING_RADIUS");
                MINIMUM_PROBLEM_DIMENSION = env->getStaticIntField(cls, "MINIMUM_PROBLEM_DIMENSION");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            BOBYQAOptimizer::BOBYQAOptimizer(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_13f7a72902bf1e20, a0, a1, a2)) {}
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
          namespace noderiv {
            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args);
            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data);
            static PyGetSetDef t_BOBYQAOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_BOBYQAOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BOBYQAOptimizer__methods_[] = {
              DECLARE_METHOD(t_BOBYQAOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BOBYQAOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BOBYQAOptimizer)[] = {
              { Py_tp_methods, t_BOBYQAOptimizer__methods_ },
              { Py_tp_init, (void *) t_BOBYQAOptimizer_init_ },
              { Py_tp_getset, t_BOBYQAOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BOBYQAOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(BOBYQAOptimizer, t_BOBYQAOptimizer, BOBYQAOptimizer);
            PyObject *t_BOBYQAOptimizer::wrap_Object(const BOBYQAOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BOBYQAOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BOBYQAOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BOBYQAOptimizer *self = (t_BOBYQAOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BOBYQAOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(BOBYQAOptimizer), &PY_TYPE_DEF(BOBYQAOptimizer), module, "BOBYQAOptimizer", 0);
            }

            void t_BOBYQAOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "class_", make_descriptor(BOBYQAOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "wrapfn_", make_descriptor(t_BOBYQAOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "boxfn_", make_descriptor(boxObject));
              env->getClass(BOBYQAOptimizer::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_INITIAL_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_INITIAL_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "DEFAULT_STOPPING_RADIUS", make_descriptor(BOBYQAOptimizer::DEFAULT_STOPPING_RADIUS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BOBYQAOptimizer), "MINIMUM_PROBLEM_DIMENSION", make_descriptor(BOBYQAOptimizer::MINIMUM_PROBLEM_DIMENSION));
            }

            static PyObject *t_BOBYQAOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BOBYQAOptimizer::initializeClass, 1)))
                return NULL;
              return t_BOBYQAOptimizer::wrap_Object(BOBYQAOptimizer(((t_BOBYQAOptimizer *) arg)->object.this$));
            }
            static PyObject *t_BOBYQAOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BOBYQAOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BOBYQAOptimizer_of_(t_BOBYQAOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_BOBYQAOptimizer_init_(t_BOBYQAOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jint a0;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  BOBYQAOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = BOBYQAOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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
            static PyObject *t_BOBYQAOptimizer_get__parameters_(t_BOBYQAOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedException::class$ = NULL;
        jmethodID *RuggedException::mids$ = NULL;
        bool RuggedException::live$ = false;

        jclass RuggedException::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedException");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3d6784947cb48668] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_init$_ca997976b075d32c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedException::RuggedException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_3d6784947cb48668, a0.this$, a1.this$)) {}

        RuggedException::RuggedException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ca997976b075d32c, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String RuggedException::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
        }

        ::java::lang::String RuggedException::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
        }

        ::java::lang::String RuggedException::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedException::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
        }

        ::org::hipparchus::exception::Localizable RuggedException::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
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
      namespace errors {
        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getParts(t_RuggedException *self);
        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self);
        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data);
        static PyGetSetDef t_RuggedException__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedException, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedException, message),
          DECLARE_GET_FIELD(t_RuggedException, parts),
          DECLARE_GET_FIELD(t_RuggedException, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedException__methods_[] = {
          DECLARE_METHOD(t_RuggedException, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedException, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedException)[] = {
          { Py_tp_methods, t_RuggedException__methods_ },
          { Py_tp_init, (void *) t_RuggedException_init_ },
          { Py_tp_getset, t_RuggedException__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedException)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedException, t_RuggedException, RuggedException);

        void t_RuggedException::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedException), &PY_TYPE_DEF(RuggedException), module, "RuggedException", 0);
        }

        void t_RuggedException::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "class_", make_descriptor(RuggedException::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "wrapfn_", make_descriptor(t_RuggedException::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedException::initializeClass, 1)))
            return NULL;
          return t_RuggedException::wrap_Object(RuggedException(((t_RuggedException *) arg)->object.this$));
        }
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedException::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::exception::Localizable a0((jobject) NULL);
              JArray< ::java::lang::Object > a1((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
              {
                INT_CALL(object = RuggedException(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::Throwable a0((jobject) NULL);
              ::org::hipparchus::exception::Localizable a1((jobject) NULL);
              JArray< ::java::lang::Object > a2((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = RuggedException(a0, a1, a2));
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

        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessage());
              return j2p(result);
            }
            break;
           case 1:
            {
              ::java::util::Locale a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMessage(a0));
                return j2p(result);
              }
            }
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedException_getParts(t_RuggedException *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TopocentricFrame::class$ = NULL;
      jmethodID *TopocentricFrame::mids$ = NULL;
      bool TopocentricFrame::live$ = false;

      jclass TopocentricFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TopocentricFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ef2c29065ec35db1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/orekit/bodies/GeodeticPoint;Ljava/lang/String;)V");
          mids$[mid_computeLimitVisibilityPoint_5a33102dde606490] = env->getMethodID(cls, "computeLimitVisibilityPoint", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getAzimuth_fe16490ba41bf1d5] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getAzimuth_13ec59221cabb99d] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCartesianPoint_17a952530a808943] = env->getMethodID(cls, "getCartesianPoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getEast_17a952530a808943] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getElevation_fe16490ba41bf1d5] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getElevation_13ec59221cabb99d] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_17a952530a808943] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_17a952530a808943] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getParentShape_883d26889ee03ca8] = env->getMethodID(cls, "getParentShape", "()Lorg/orekit/bodies/BodyShape;");
          mids$[mid_getPoint_fabc97b1aefe5844] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPoint_4b35f4d29a9f8681] = env->getMethodID(cls, "getPoint", "(Lorg/hipparchus/Field;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getPosition_5343d34e5fbffcdd] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRange_fe16490ba41bf1d5] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRange_13ec59221cabb99d] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRangeRate_ef900b74d4118403] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRangeRate_92f9516c8df30724] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getSouth_17a952530a808943] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTrackingCoordinates_c1bd04ec8d296726] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TrackingCoordinates;");
          mids$[mid_getTrackingCoordinates_001f8f11e26c51a3] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldTrackingCoordinates;");
          mids$[mid_getWest_17a952530a808943] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_17a952530a808943] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAtDistance_5a33102dde606490] = env->getMethodID(cls, "pointAtDistance", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TopocentricFrame::TopocentricFrame(const ::org::orekit::bodies::BodyShape & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_ef2c29065ec35db1, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::computeLimitVisibilityPoint(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_computeLimitVisibilityPoint_5a33102dde606490], a0, a1, a2));
      }

      jdouble TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_fe16490ba41bf1d5], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_13ec59221cabb99d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getCartesianPoint() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianPoint_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_17a952530a808943]));
      }

      jdouble TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_fe16490ba41bf1d5], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_13ec59221cabb99d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_17a952530a808943]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TopocentricFrame::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::BodyShape TopocentricFrame::getParentShape() const
      {
        return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getParentShape_883d26889ee03ca8]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_fabc97b1aefe5844]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint TopocentricFrame::getPoint(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_4b35f4d29a9f8681], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5343d34e5fbffcdd], a0.this$, a1.this$));
      }

      jdouble TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_fe16490ba41bf1d5], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_13ec59221cabb99d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRangeRate(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRangeRate_ef900b74d4118403], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getRangeRate(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRangeRate_92f9516c8df30724], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_17a952530a808943]));
      }

      ::org::orekit::utils::TrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_c1bd04ec8d296726], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::FieldTrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::utils::FieldTrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_001f8f11e26c51a3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_17a952530a808943]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::pointAtDistance(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_5a33102dde606490], a0, a1, a2));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data);
      static PyGetSetDef t_TopocentricFrame__fields_[] = {
        DECLARE_GET_FIELD(t_TopocentricFrame, cartesianPoint),
        DECLARE_GET_FIELD(t_TopocentricFrame, east),
        DECLARE_GET_FIELD(t_TopocentricFrame, nadir),
        DECLARE_GET_FIELD(t_TopocentricFrame, north),
        DECLARE_GET_FIELD(t_TopocentricFrame, parentShape),
        DECLARE_GET_FIELD(t_TopocentricFrame, point),
        DECLARE_GET_FIELD(t_TopocentricFrame, south),
        DECLARE_GET_FIELD(t_TopocentricFrame, west),
        DECLARE_GET_FIELD(t_TopocentricFrame, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TopocentricFrame__methods_[] = {
        DECLARE_METHOD(t_TopocentricFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, computeLimitVisibilityPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getAzimuth, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getCartesianPoint, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getEast, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getElevation, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getParentShape, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRange, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRangeRate, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getTrackingCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getWest, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, pointAtDistance, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TopocentricFrame)[] = {
        { Py_tp_methods, t_TopocentricFrame__methods_ },
        { Py_tp_init, (void *) t_TopocentricFrame_init_ },
        { Py_tp_getset, t_TopocentricFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TopocentricFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TopocentricFrame, t_TopocentricFrame, TopocentricFrame);

      void t_TopocentricFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TopocentricFrame), &PY_TYPE_DEF(TopocentricFrame), module, "TopocentricFrame", 0);
      }

      void t_TopocentricFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "class_", make_descriptor(TopocentricFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "wrapfn_", make_descriptor(t_TopocentricFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TopocentricFrame::initializeClass, 1)))
          return NULL;
        return t_TopocentricFrame::wrap_Object(TopocentricFrame(((t_TopocentricFrame *) arg)->object.this$));
      }
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TopocentricFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::BodyShape a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        TopocentricFrame object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TopocentricFrame(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLimitVisibilityPoint(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLimitVisibilityPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAzimuth", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self)
      {
        ::org::orekit::bodies::BodyShape result((jobject) NULL);
        OBJ_CALL(result = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getPoint());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRange", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRangeRate", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldTrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_FieldTrackingCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::TrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_TrackingCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTrackingCoordinates", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::BodyShape value((jobject) NULL);
        OBJ_CALL(value = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractScheduler::class$ = NULL;
          jmethodID *AbstractScheduler::mids$ = NULL;
          bool AbstractScheduler::live$ = false;

          jclass AbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_22733af3de6e4c17] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_f2ad316b33dc9e1f] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_getSelector_3b7c5bc809d41a49] = env->getMethodID(cls, "getSelector", "()Lorg/orekit/time/DatesSelector;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_measurementIsFeasible_ee2067c5768b6768] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet AbstractScheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_22733af3de6e4c17], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder AbstractScheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_f2ad316b33dc9e1f]));
          }

          ::org::orekit::time::DatesSelector AbstractScheduler::getSelector() const
          {
            return ::org::orekit::time::DatesSelector(env->callObjectMethod(this$, mids$[mid_getSelector_3b7c5bc809d41a49]));
          }

          void AbstractScheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
        namespace generation {
          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg);
          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data);
          static PyGetSetDef t_AbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractScheduler, builder),
            DECLARE_GET_FIELD(t_AbstractScheduler, selector),
            DECLARE_GET_FIELD(t_AbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_AbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractScheduler, generate, METH_O),
            DECLARE_METHOD(t_AbstractScheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, getSelector, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractScheduler)[] = {
            { Py_tp_methods, t_AbstractScheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractScheduler, t_AbstractScheduler, AbstractScheduler);
          PyObject *t_AbstractScheduler::wrap_Object(const AbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractScheduler), &PY_TYPE_DEF(AbstractScheduler), module, "AbstractScheduler", 0);
          }

          void t_AbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "class_", make_descriptor(AbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "wrapfn_", make_descriptor(t_AbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_AbstractScheduler::wrap_Object(AbstractScheduler(((t_AbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self)
          {
            ::org::orekit::time::DatesSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(result);
          }

          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }

          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::time::DatesSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ValueAndJacobianFunction::class$ = NULL;
            jmethodID *ValueAndJacobianFunction::mids$ = NULL;
            bool ValueAndJacobianFunction::live$ = false;

            jclass ValueAndJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeJacobian_70265c1b8bef83aa] = env->getMethodID(cls, "computeJacobian", "([D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_computeValue_8cf27fb7e5ba736a] = env->getMethodID(cls, "computeValue", "([D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealMatrix ValueAndJacobianFunction::computeJacobian(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeJacobian_70265c1b8bef83aa], a0.this$));
            }

            ::org::hipparchus::linear::RealVector ValueAndJacobianFunction::computeValue(const JArray< jdouble > & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_computeValue_8cf27fb7e5ba736a], a0.this$));
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
            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg);
            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_ValueAndJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_ValueAndJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeJacobian, METH_O),
              DECLARE_METHOD(t_ValueAndJacobianFunction, computeValue, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ValueAndJacobianFunction)[] = {
              { Py_tp_methods, t_ValueAndJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ValueAndJacobianFunction)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction),
              NULL
            };

            DEFINE_TYPE(ValueAndJacobianFunction, t_ValueAndJacobianFunction, ValueAndJacobianFunction);

            void t_ValueAndJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(ValueAndJacobianFunction), &PY_TYPE_DEF(ValueAndJacobianFunction), module, "ValueAndJacobianFunction", 0);
            }

            void t_ValueAndJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "class_", make_descriptor(ValueAndJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "wrapfn_", make_descriptor(t_ValueAndJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ValueAndJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ValueAndJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ValueAndJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_ValueAndJacobianFunction::wrap_Object(ValueAndJacobianFunction(((t_ValueAndJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_ValueAndJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ValueAndJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ValueAndJacobianFunction_computeJacobian(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeJacobian(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeJacobian", arg);
              return NULL;
            }

            static PyObject *t_ValueAndJacobianFunction_computeValue(t_ValueAndJacobianFunction *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(result = self->object.computeValue(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "computeValue", arg);
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
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHull::class$ = NULL;
        jmethodID *ConvexHull::mids$ = NULL;
        bool ConvexHull::live$ = false;

        jclass ConvexHull::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHull");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createRegion_9552c312bc09a7e5] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getVertices_a65b446f3778f2ab] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::Region ConvexHull::createRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_9552c312bc09a7e5]));
        }

        JArray< ::org::hipparchus::geometry::Point > ConvexHull::getVertices() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getVertices_a65b446f3778f2ab]));
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
      namespace hull {
        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args);
        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self);
        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self);
        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data);
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data);
        static PyGetSetDef t_ConvexHull__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHull, vertices),
          DECLARE_GET_FIELD(t_ConvexHull, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHull__methods_[] = {
          DECLARE_METHOD(t_ConvexHull, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHull, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHull, createRegion, METH_NOARGS),
          DECLARE_METHOD(t_ConvexHull, getVertices, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHull)[] = {
          { Py_tp_methods, t_ConvexHull__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHull__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHull)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ConvexHull, t_ConvexHull, ConvexHull);
        PyObject *t_ConvexHull::wrap_Object(const ConvexHull& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHull::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHull::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHull *self = (t_ConvexHull *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHull::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHull), &PY_TYPE_DEF(ConvexHull), module, "ConvexHull", 0);
        }

        void t_ConvexHull::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "class_", make_descriptor(ConvexHull::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "wrapfn_", make_descriptor(t_ConvexHull::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHull_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHull::initializeClass, 1)))
            return NULL;
          return t_ConvexHull::wrap_Object(ConvexHull(((t_ConvexHull *) arg)->object.this$));
        }
        static PyObject *t_ConvexHull_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHull::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHull_of_(t_ConvexHull *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHull_createRegion(t_ConvexHull *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.createRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_ConvexHull_getVertices(t_ConvexHull *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVertices());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
        static PyObject *t_ConvexHull_get__parameters_(t_ConvexHull *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ConvexHull_get__vertices(t_ConvexHull *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVertices());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldApsideDetector.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldApsideDetector::class$ = NULL;
        jmethodID *FieldApsideDetector::mids$ = NULL;
        bool FieldApsideDetector::live$ = false;

        jclass FieldApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_f605f7e37579634f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_56ad6b0b2ad03807] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldApsideDetector::FieldApsideDetector(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

        FieldApsideDetector::FieldApsideDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f605f7e37579634f, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldApsideDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
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
      namespace events {
        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args);
        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args);
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data);
        static PyGetSetDef t_FieldApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldApsideDetector__methods_[] = {
          DECLARE_METHOD(t_FieldApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldApsideDetector)[] = {
          { Py_tp_methods, t_FieldApsideDetector__methods_ },
          { Py_tp_init, (void *) t_FieldApsideDetector_init_ },
          { Py_tp_getset, t_FieldApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldApsideDetector, t_FieldApsideDetector, FieldApsideDetector);
        PyObject *t_FieldApsideDetector::wrap_Object(const FieldApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldApsideDetector *self = (t_FieldApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldApsideDetector), &PY_TYPE_DEF(FieldApsideDetector), module, "FieldApsideDetector", 0);
        }

        void t_FieldApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "class_", make_descriptor(FieldApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "wrapfn_", make_descriptor(t_FieldApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldApsideDetector::initializeClass, 1)))
            return NULL;
          return t_FieldApsideDetector::wrap_Object(FieldApsideDetector(((t_FieldApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldApsideDetector_of_(t_FieldApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldApsideDetector_init_(t_FieldApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              FieldApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldApsideDetector(a0, a1));
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

        static PyObject *t_FieldApsideDetector_g(t_FieldApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldApsideDetector_get__parameters_(t_FieldApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AbstractConvexHullGenerator2D::class$ = NULL;
            jmethodID *AbstractConvexHullGenerator2D::mids$ = NULL;
            bool AbstractConvexHullGenerator2D::live$ = false;

            jclass AbstractConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_94066d174e88779f] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");
                mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
                mids$[mid_isIncludeCollinearPoints_e470b6d9e0d979db] = env->getMethodID(cls, "isIncludeCollinearPoints", "()Z");
                mids$[mid_findHullVertices_5c0bbab57d449f37] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D AbstractConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_94066d174e88779f], a0.this$));
            }

            jdouble AbstractConvexHullGenerator2D::getTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
            }

            jboolean AbstractConvexHullGenerator2D::isIncludeCollinearPoints() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isIncludeCollinearPoints_e470b6d9e0d979db]);
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyGetSetDef t_AbstractConvexHullGenerator2D__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, includeCollinearPoints),
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, tolerance),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, generate, METH_O),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, getTolerance, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, isIncludeCollinearPoints, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_AbstractConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConvexHullGenerator2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractConvexHullGenerator2D, t_AbstractConvexHullGenerator2D, AbstractConvexHullGenerator2D);

            void t_AbstractConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConvexHullGenerator2D), &PY_TYPE_DEF(AbstractConvexHullGenerator2D), module, "AbstractConvexHullGenerator2D", 0);
            }

            void t_AbstractConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "class_", make_descriptor(AbstractConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "wrapfn_", make_descriptor(t_AbstractConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_AbstractConvexHullGenerator2D::wrap_Object(AbstractConvexHullGenerator2D(((t_AbstractConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generate", arg);
              return NULL;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTolerance());
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
#include "org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *SimpleExponentialAtmosphere::class$ = NULL;
          jmethodID *SimpleExponentialAtmosphere::mids$ = NULL;
          bool SimpleExponentialAtmosphere::live$ = false;

          jclass SimpleExponentialAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1c805b0fec425e92] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;DDD)V");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleExponentialAtmosphere::SimpleExponentialAtmosphere(const ::org::orekit::bodies::BodyShape & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c805b0fec425e92, a0.this$, a1, a2, a3)) {}

          jdouble SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_ee5ac6667b0d4b90], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e3f5c4474b151066], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame SimpleExponentialAtmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args);
          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self);
          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data);
          static PyGetSetDef t_SimpleExponentialAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_SimpleExponentialAtmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SimpleExponentialAtmosphere__methods_[] = {
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleExponentialAtmosphere)[] = {
            { Py_tp_methods, t_SimpleExponentialAtmosphere__methods_ },
            { Py_tp_init, (void *) t_SimpleExponentialAtmosphere_init_ },
            { Py_tp_getset, t_SimpleExponentialAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleExponentialAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleExponentialAtmosphere, t_SimpleExponentialAtmosphere, SimpleExponentialAtmosphere);

          void t_SimpleExponentialAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleExponentialAtmosphere), &PY_TYPE_DEF(SimpleExponentialAtmosphere), module, "SimpleExponentialAtmosphere", 0);
          }

          void t_SimpleExponentialAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "class_", make_descriptor(SimpleExponentialAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "wrapfn_", make_descriptor(t_SimpleExponentialAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 1)))
              return NULL;
            return t_SimpleExponentialAtmosphere::wrap_Object(SimpleExponentialAtmosphere(((t_SimpleExponentialAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::BodyShape a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            SimpleExponentialAtmosphere object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SimpleExponentialAtmosphere(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixUtils.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixUtils::class$ = NULL;
      jmethodID *MatrixUtils::mids$ = NULL;
      bool MatrixUtils::live$ = false;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::DEFAULT_FORMAT = NULL;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::OCTAVE_FORMAT = NULL;

      jclass MatrixUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bigFractionMatrixToRealMatrix_9fb9a1441a6479fb] = env->getStaticMethodID(cls, "bigFractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_blockInverse_549c024f6fbaee2a] = env->getStaticMethodID(cls, "blockInverse", "(Lorg/hipparchus/linear/RealMatrix;I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_checkAdditionCompatible_9300e0efbec32708] = env->getStaticMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkColumnIndex_de5dcced44bc9dea] = env->getStaticMethodID(cls, "checkColumnIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkMatrixIndex_017e238265e32530] = env->getStaticMethodID(cls, "checkMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;II)V");
          mids$[mid_checkMultiplicationCompatible_9300e0efbec32708] = env->getStaticMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkRowIndex_de5dcced44bc9dea] = env->getStaticMethodID(cls, "checkRowIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkSameColumnDimension_9300e0efbec32708] = env->getStaticMethodID(cls, "checkSameColumnDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSameRowDimension_9300e0efbec32708] = env->getStaticMethodID(cls, "checkSameRowDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSubMatrixIndex_72f0321bceef35fd] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;[I[I)V");
          mids$[mid_checkSubMatrixIndex_3c5b7326720b7ecb] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;IIII)V");
          mids$[mid_checkSubtractionCompatible_9300e0efbec32708] = env->getStaticMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSymmetric_27ff5cf8ba76b4fe] = env->getStaticMethodID(cls, "checkSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_createColumnFieldMatrix_f4763f915253b903] = env->getStaticMethodID(cls, "createColumnFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createColumnRealMatrix_70265c1b8bef83aa] = env->getStaticMethodID(cls, "createColumnRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createFieldDiagonalMatrix_f4763f915253b903] = env->getStaticMethodID(cls, "createFieldDiagonalMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldIdentityMatrix_93a1eea693cbc805] = env->getStaticMethodID(cls, "createFieldIdentityMatrix", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_e0465faeef73b24e] = env->getStaticMethodID(cls, "createFieldMatrix", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_f040517a28cc4692] = env->getStaticMethodID(cls, "createFieldMatrix", "(Lorg/hipparchus/Field;II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldVector_183d789bbe27b047] = env->getStaticMethodID(cls, "createFieldVector", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createFieldVector_9fe3b6e2ee7771dd] = env->getStaticMethodID(cls, "createFieldVector", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createRealDiagonalMatrix_70265c1b8bef83aa] = env->getStaticMethodID(cls, "createRealDiagonalMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealIdentityMatrix_3a4716f77215ee99] = env->getStaticMethodID(cls, "createRealIdentityMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_d983e368b64b23a3] = env->getStaticMethodID(cls, "createRealMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_4225756160ad1bc1] = env->getStaticMethodID(cls, "createRealMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealVector_8cf27fb7e5ba736a] = env->getStaticMethodID(cls, "createRealVector", "([D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRealVector_2cafd1b18558ed5f] = env->getStaticMethodID(cls, "createRealVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRowFieldMatrix_f4763f915253b903] = env->getStaticMethodID(cls, "createRowFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createRowRealMatrix_70265c1b8bef83aa] = env->getStaticMethodID(cls, "createRowRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_fractionMatrixToRealMatrix_9fb9a1441a6479fb] = env->getStaticMethodID(cls, "fractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_inverse_e00cd33aedcc5bd0] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_inverse_7a6fbf98ec206240] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_isSymmetric_e41a0097560f9100] = env->getStaticMethodID(cls, "isSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)Z");
          mids$[mid_matrixExponential_e00cd33aedcc5bd0] = env->getStaticMethodID(cls, "matrixExponential", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_orthonormalize_7e40acb6d4e820e7] = env->getStaticMethodID(cls, "orthonormalize", "(Ljava/util/List;DLorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_orthonormalize_17f42c4cc95332ee] = env->getStaticMethodID(cls, "orthonormalize", "(Lorg/hipparchus/Field;Ljava/util/List;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_solveLowerTriangularSystem_99f2b480bb8e82fc] = env->getStaticMethodID(cls, "solveLowerTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_solveUpperTriangularSystem_99f2b480bb8e82fc] = env->getStaticMethodID(cls, "solveUpperTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "DEFAULT_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          OCTAVE_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "OCTAVE_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::bigFractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_bigFractionMatrixToRealMatrix_9fb9a1441a6479fb], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::blockInverse(const ::org::hipparchus::linear::RealMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_blockInverse_549c024f6fbaee2a], a0.this$, a1));
      }

      void MatrixUtils::checkAdditionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkAdditionCompatible_9300e0efbec32708], a0.this$, a1.this$);
      }

      void MatrixUtils::checkColumnIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkColumnIndex_de5dcced44bc9dea], a0.this$, a1);
      }

      void MatrixUtils::checkMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMatrixIndex_017e238265e32530], a0.this$, a1, a2);
      }

      void MatrixUtils::checkMultiplicationCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMultiplicationCompatible_9300e0efbec32708], a0.this$, a1.this$);
      }

      void MatrixUtils::checkRowIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRowIndex_de5dcced44bc9dea], a0.this$, a1);
      }

      void MatrixUtils::checkSameColumnDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameColumnDimension_9300e0efbec32708], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSameRowDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameRowDimension_9300e0efbec32708], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, const JArray< jint > & a1, const JArray< jint > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_72f0321bceef35fd], a0.this$, a1.this$, a2.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2, jint a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_3c5b7326720b7ecb], a0.this$, a1, a2, a3, a4);
      }

      void MatrixUtils::checkSubtractionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubtractionCompatible_9300e0efbec32708], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSymmetric_27ff5cf8ba76b4fe], a0.this$, a1);
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createColumnFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnFieldMatrix_f4763f915253b903], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createColumnRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnRealMatrix_70265c1b8bef83aa], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldDiagonalMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldDiagonalMatrix_f4763f915253b903], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldIdentityMatrix(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldIdentityMatrix_93a1eea693cbc805], a0.this$, a1));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_e0465faeef73b24e], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_f040517a28cc4692], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_183d789bbe27b047], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_9fe3b6e2ee7771dd], a0.this$, a1));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealDiagonalMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealDiagonalMatrix_70265c1b8bef83aa], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealIdentityMatrix(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealIdentityMatrix_3a4716f77215ee99], a0));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_d983e368b64b23a3], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_4225756160ad1bc1], a0, a1));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_8cf27fb7e5ba736a], a0.this$));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_2cafd1b18558ed5f], a0));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowFieldMatrix_f4763f915253b903], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRowRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowRealMatrix_70265c1b8bef83aa], a0.this$));
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::fractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_fractionMatrixToRealMatrix_9fb9a1441a6479fb], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_e00cd33aedcc5bd0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_7a6fbf98ec206240], a0.this$, a1));
      }

      jboolean MatrixUtils::isSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isSymmetric_e41a0097560f9100], a0.this$, a1);
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::matrixExponential(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_matrixExponential_e00cd33aedcc5bd0], a0.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::java::util::List & a0, jdouble a1, const ::org::hipparchus::linear::DependentVectorsHandler & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_7e40acb6d4e820e7], a0.this$, a1, a2.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::org::hipparchus::Field & a0, const ::java::util::List & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::linear::DependentVectorsHandler & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_17f42c4cc95332ee], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      void MatrixUtils::solveLowerTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveLowerTriangularSystem_99f2b480bb8e82fc], a0.this$, a1.this$);
      }

      void MatrixUtils::solveUpperTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveUpperTriangularSystem_99f2b480bb8e82fc], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MatrixUtils__methods_[] = {
        DECLARE_METHOD(t_MatrixUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, bigFractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, blockInverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkAdditionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkColumnIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMultiplicationCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkRowIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameColumnDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameRowDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubtractionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldIdentityMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealIdentityMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, fractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, inverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, isSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, matrixExponential, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, orthonormalize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveLowerTriangularSystem, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveUpperTriangularSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixUtils)[] = {
        { Py_tp_methods, t_MatrixUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixUtils, t_MatrixUtils, MatrixUtils);

      void t_MatrixUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixUtils), &PY_TYPE_DEF(MatrixUtils), module, "MatrixUtils", 0);
      }

      void t_MatrixUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "class_", make_descriptor(MatrixUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "wrapfn_", make_descriptor(t_MatrixUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MatrixUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "DEFAULT_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::DEFAULT_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "OCTAVE_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::OCTAVE_FORMAT)));
      }

      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixUtils::initializeClass, 1)))
          return NULL;
        return t_MatrixUtils::wrap_Object(MatrixUtils(((t_MatrixUtils *) arg)->object.this$));
      }
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::bigFractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "bigFractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::blockInverse(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "blockInverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkAdditionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkAdditionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkColumnIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkColumnIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "kII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMatrixIndex(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMultiplicationCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMultiplicationCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkRowIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRowIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameColumnDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameColumnDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameRowDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameRowDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);

            if (!parseArgs(args, "k[I[I", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkSubMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubtractionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSubtractionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSymmetric(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldIdentityMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldIdentityMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0, a1, a2));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0, a1));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealIdentityMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealIdentityMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::fractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "inverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::isSymmetric(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::matrixExponential(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "matrixExponential", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::linear::DependentVectorsHandler a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDK", ::java::util::List::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector));
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::linear::DependentVectorsHandler a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2, a3));
              return ::java::util::t_List::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "orthonormalize", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveLowerTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveLowerTriangularSystem", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveUpperTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveUpperTriangularSystem", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/utils/parsing/RinexUtils.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *RinexUtils::class$ = NULL;
            jmethodID *RinexUtils::mids$ = NULL;
            bool RinexUtils::live$ = false;
            jint RinexUtils::LABEL_INDEX = (jint) 0;

            jclass RinexUtils::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/parsing/RinexUtils");

                mids$ = new jmethodID[max_mid];
                mids$[mid_convert2DigitsYear_38565d58479aa24a] = env->getStaticMethodID(cls, "convert2DigitsYear", "(I)I");
                mids$[mid_getLabel_43625fc1c3d86afe] = env->getStaticMethodID(cls, "getLabel", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_matchesLabel_5e4279f3952110c4] = env->getStaticMethodID(cls, "matchesLabel", "(Ljava/lang/String;Ljava/lang/String;)Z");
                mids$[mid_parseComment_9d97614692e836f5] = env->getStaticMethodID(cls, "parseComment", "(ILjava/lang/String;Lorg/orekit/files/rinex/RinexFile;)V");
                mids$[mid_parseDouble_ea33f3a6a7cdada9] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;II)D");
                mids$[mid_parseInt_8e35c5c484d4b0eb] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;II)I");
                mids$[mid_parseProgramRunByDate_3961e35f37851f95] = env->getStaticMethodID(cls, "parseProgramRunByDate", "(Ljava/lang/String;ILjava/lang/String;Lorg/orekit/time/TimeScales;Lorg/orekit/files/rinex/section/RinexBaseHeader;)V");
                mids$[mid_parseString_410c54070c420baa] = env->getStaticMethodID(cls, "parseString", "(Ljava/lang/String;II)Ljava/lang/String;");
                mids$[mid_parseVersionFileTypeSatelliteSystem_76d04d54b7b264d3] = env->getStaticMethodID(cls, "parseVersionFileTypeSatelliteSystem", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/rinex/section/RinexBaseHeader;[D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LABEL_INDEX = env->getStaticIntField(cls, "LABEL_INDEX");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint RinexUtils::convert2DigitsYear(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_convert2DigitsYear_38565d58479aa24a], a0);
            }

            ::java::lang::String RinexUtils::getLabel(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getLabel_43625fc1c3d86afe], a0.this$));
            }

            jboolean RinexUtils::matchesLabel(const ::java::lang::String & a0, const ::java::lang::String & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticBooleanMethod(cls, mids$[mid_matchesLabel_5e4279f3952110c4], a0.this$, a1.this$);
            }

            void RinexUtils::parseComment(jint a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::RinexFile & a2)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseComment_9d97614692e836f5], a0, a1.this$, a2.this$);
            }

            jdouble RinexUtils::parseDouble(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_ea33f3a6a7cdada9], a0.this$, a1, a2);
            }

            jint RinexUtils::parseInt(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_parseInt_8e35c5c484d4b0eb], a0.this$, a1, a2);
            }

            void RinexUtils::parseProgramRunByDate(const ::java::lang::String & a0, jint a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::files::rinex::section::RinexBaseHeader & a4)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseProgramRunByDate_3961e35f37851f95], a0.this$, a1, a2.this$, a3.this$, a4.this$);
            }

            ::java::lang::String RinexUtils::parseString(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_parseString_410c54070c420baa], a0.this$, a1, a2));
            }

            void RinexUtils::parseVersionFileTypeSatelliteSystem(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::section::RinexBaseHeader & a2, const JArray< jdouble > & a3)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseVersionFileTypeSatelliteSystem_76d04d54b7b264d3], a0.this$, a1.this$, a2.this$, a3.this$);
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
      namespace rinex {
        namespace utils {
          namespace parsing {
            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_RinexUtils__methods_[] = {
              DECLARE_METHOD(t_RinexUtils, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, convert2DigitsYear, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, getLabel, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, matchesLabel, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseComment, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseDouble, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseInt, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseProgramRunByDate, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseString, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseVersionFileTypeSatelliteSystem, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RinexUtils)[] = {
              { Py_tp_methods, t_RinexUtils__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RinexUtils)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RinexUtils, t_RinexUtils, RinexUtils);

            void t_RinexUtils::install(PyObject *module)
            {
              installType(&PY_TYPE(RinexUtils), &PY_TYPE_DEF(RinexUtils), module, "RinexUtils", 0);
            }

            void t_RinexUtils::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "class_", make_descriptor(RinexUtils::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "wrapfn_", make_descriptor(t_RinexUtils::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "boxfn_", make_descriptor(boxObject));
              env->getClass(RinexUtils::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "LABEL_INDEX", make_descriptor(RinexUtils::LABEL_INDEX));
            }

            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RinexUtils::initializeClass, 1)))
                return NULL;
              return t_RinexUtils::wrap_Object(RinexUtils(((t_RinexUtils *) arg)->object.this$));
            }
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RinexUtils::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              jint result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::convert2DigitsYear(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "convert2DigitsYear", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::getLabel(a0));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "getLabel", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::matchesLabel(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError(type, "matchesLabel", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::RinexFile a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "IsK", ::org::orekit::files::rinex::RinexFile::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::rinex::t_RinexFile::parameters_))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseComment(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseComment", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseDouble(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "parseDouble", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jint result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseInt(a0, a1, a2));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "parseInt", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::time::TimeScales a3((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a4((jobject) NULL);

              if (!parseArgs(args, "sIskk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseProgramRunByDate(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseProgramRunByDate", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseString(a0, a1, a2));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "parseString", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "ssk[D", ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseVersionFileTypeSatelliteSystem(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseVersionFileTypeSatelliteSystem", args);
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
#include "org/orekit/files/ilrs/CRDParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDParser::class$ = NULL;
        jmethodID *CRDParser::mids$ = NULL;
        bool CRDParser::live$ = false;
        ::java::lang::String *CRDParser::DEFAULT_CRD_SUPPORTED_NAMES = NULL;

        jclass CRDParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6d73d536a2f24dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
            mids$[mid_getTimeScale_63ac10047983bd43] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_parse_24546ef0d7d92801] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CRD;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CRD_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_CRD_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDParser::CRDParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        CRDParser::CRDParser(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d73d536a2f24dd5, a0.this$)) {}

        ::org::orekit::time::TimeScale CRDParser::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_63ac10047983bd43]));
        }

        ::org::orekit::files::ilrs::CRD CRDParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CRD(env->callObjectMethod(this$, mids$[mid_parse_24546ef0d7d92801], a0.this$));
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
      namespace ilrs {
        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self);
        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg);
        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data);
        static PyGetSetDef t_CRDParser__fields_[] = {
          DECLARE_GET_FIELD(t_CRDParser, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDParser__methods_[] = {
          DECLARE_METHOD(t_CRDParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDParser, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDParser)[] = {
          { Py_tp_methods, t_CRDParser__methods_ },
          { Py_tp_init, (void *) t_CRDParser_init_ },
          { Py_tp_getset, t_CRDParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDParser, t_CRDParser, CRDParser);

        void t_CRDParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDParser), &PY_TYPE_DEF(CRDParser), module, "CRDParser", 0);
        }

        void t_CRDParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "class_", make_descriptor(CRDParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "wrapfn_", make_descriptor(t_CRDParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDParser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDParser), "DEFAULT_CRD_SUPPORTED_NAMES", make_descriptor(j2p(*CRDParser::DEFAULT_CRD_SUPPORTED_NAMES)));
        }

        static PyObject *t_CRDParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDParser::initializeClass, 1)))
            return NULL;
          return t_CRDParser::wrap_Object(CRDParser(((t_CRDParser *) arg)->object.this$));
        }
        static PyObject *t_CRDParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDParser_init_(t_CRDParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CRDParser object((jobject) NULL);

              INT_CALL(object = CRDParser());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CRDParser object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CRDParser(a0));
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

        static PyObject *t_CRDParser_getTimeScale(t_CRDParser *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CRDParser_parse(t_CRDParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CRD result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CRD::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }

        static PyObject *t_CRDParser_get__timeScale(t_CRDParser *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *IntConsumer::class$ = NULL;
      jmethodID *IntConsumer::mids$ = NULL;
      bool IntConsumer::live$ = false;

      jclass IntConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/IntConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_0a2a1ac2721c0336] = env->getMethodID(cls, "accept", "(I)V");
          mids$[mid_andThen_bec3d71fc5873ec1] = env->getMethodID(cls, "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IntConsumer::accept(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_0a2a1ac2721c0336], a0);
      }

      IntConsumer IntConsumer::andThen(const IntConsumer & a0) const
      {
        return IntConsumer(env->callObjectMethod(this$, mids$[mid_andThen_bec3d71fc5873ec1], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg);
      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg);

      static PyMethodDef t_IntConsumer__methods_[] = {
        DECLARE_METHOD(t_IntConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, accept, METH_O),
        DECLARE_METHOD(t_IntConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntConsumer)[] = {
        { Py_tp_methods, t_IntConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntConsumer, t_IntConsumer, IntConsumer);

      void t_IntConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(IntConsumer), &PY_TYPE_DEF(IntConsumer), module, "IntConsumer", 0);
      }

      void t_IntConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "class_", make_descriptor(IntConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "wrapfn_", make_descriptor(t_IntConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntConsumer::initializeClass, 1)))
          return NULL;
        return t_IntConsumer::wrap_Object(IntConsumer(((t_IntConsumer *) arg)->object.this$));
      }
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg)
      {
        IntConsumer a0((jobject) NULL);
        IntConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", IntConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_IntConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UniformRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UniformRandomGenerator::class$ = NULL;
      jmethodID *UniformRandomGenerator::mids$ = NULL;
      bool UniformRandomGenerator::live$ = false;

      jclass UniformRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UniformRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UniformRandomGenerator::UniformRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

      jdouble UniformRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_456d9a2f64d6b28d]);
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
      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self);

      static PyMethodDef t_UniformRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_UniformRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UniformRandomGenerator)[] = {
        { Py_tp_methods, t_UniformRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_UniformRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UniformRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UniformRandomGenerator, t_UniformRandomGenerator, UniformRandomGenerator);

      void t_UniformRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UniformRandomGenerator), &PY_TYPE_DEF(UniformRandomGenerator), module, "UniformRandomGenerator", 0);
      }

      void t_UniformRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "class_", make_descriptor(UniformRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "wrapfn_", make_descriptor(t_UniformRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UniformRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_UniformRandomGenerator::wrap_Object(UniformRandomGenerator(((t_UniformRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UniformRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        UniformRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = UniformRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
