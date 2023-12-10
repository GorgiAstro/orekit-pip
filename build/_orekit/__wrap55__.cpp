#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DSGenerator::class$ = NULL;
        jmethodID *DSGenerator::mids$ = NULL;
        bool DSGenerator::live$ = false;

        jclass DSGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DSGenerator");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace utils {
        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_DSGenerator__methods_[] = {
          DECLARE_METHOD(t_DSGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSGenerator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSGenerator)[] = {
          { Py_tp_methods, t_DSGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSGenerator)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::DerivativeGenerator),
          NULL
        };

        DEFINE_TYPE(DSGenerator, t_DSGenerator, DSGenerator);

        void t_DSGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DSGenerator), &PY_TYPE_DEF(DSGenerator), module, "DSGenerator", 0);
        }

        void t_DSGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "class_", make_descriptor(DSGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "wrapfn_", make_descriptor(t_DSGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSGenerator::initializeClass, 1)))
            return NULL;
          return t_DSGenerator::wrap_Object(DSGenerator(((t_DSGenerator *) arg)->object.this$));
        }
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmWriter::class$ = NULL;
              jmethodID *OcmWriter::mids$ = NULL;
              bool OcmWriter::live$ = false;
              jdouble OcmWriter::CCSDS_OCM_VERS = (jdouble) 0;
              jint OcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_076e559209c6d5a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;)V");
                  mids$[mid_getEquatorialRadius_dff5885c2c873297] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFlattening_dff5885c2c873297] = env->getMethodID(cls, "getFlattening", "()D");
                  mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OCM_VERS = env->getStaticDoubleField(cls, "CCSDS_OCM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmWriter::OcmWriter(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_076e559209c6d5a4, a0.this$, a1, a2, a3.this$)) {}

              jdouble OcmWriter::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_dff5885c2c873297]);
              }

              jdouble OcmWriter::getFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFlattening_dff5885c2c873297]);
              }
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
            namespace ocm {
              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args);
              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self);
              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self);
              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data);
              static PyGetSetDef t_OcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OcmWriter, equatorialRadius),
                DECLARE_GET_FIELD(t_OcmWriter, flattening),
                DECLARE_GET_FIELD(t_OcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmWriter__methods_[] = {
                DECLARE_METHOD(t_OcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmWriter, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_OcmWriter, getFlattening, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmWriter)[] = {
                { Py_tp_methods, t_OcmWriter__methods_ },
                { Py_tp_init, (void *) t_OcmWriter_init_ },
                { Py_tp_getset, t_OcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OcmWriter, t_OcmWriter, OcmWriter);
              PyObject *t_OcmWriter::wrap_Object(const OcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmWriter), &PY_TYPE_DEF(OcmWriter), module, "OcmWriter", 0);
              }

              void t_OcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "class_", make_descriptor(OcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "wrapfn_", make_descriptor(t_OcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "CCSDS_OCM_VERS", make_descriptor(OcmWriter::CCSDS_OCM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "KVN_PADDING_WIDTH", make_descriptor(OcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmWriter::initializeClass, 1)))
                  return NULL;
                return t_OcmWriter::wrap_Object(OcmWriter(((t_OcmWriter *) arg)->object.this$));
              }
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                jdouble a2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                OcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KDDk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = OcmWriter(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(Ocm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlattening());
                return PyFloat_FromDouble((double) result);
              }
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFlattening());
                return PyFloat_FromDouble((double) value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CharConsumer::class$ = NULL;
            jmethodID *ParseToken$CharConsumer::mids$ = NULL;
            bool ParseToken$CharConsumer::live$ = false;

            jclass ParseToken$CharConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_636c0bbb96cab723] = env->getMethodID(cls, "accept", "(C)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CharConsumer::accept(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_636c0bbb96cab723], a0);
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
            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CharConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CharConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CharConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CharConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CharConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CharConsumer, t_ParseToken$CharConsumer, ParseToken$CharConsumer);

            void t_ParseToken$CharConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CharConsumer), &PY_TYPE_DEF(ParseToken$CharConsumer), module, "ParseToken$CharConsumer", 0);
            }

            void t_ParseToken$CharConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "class_", make_descriptor(ParseToken$CharConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "wrapfn_", make_descriptor(t_ParseToken$CharConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CharConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CharConsumer::wrap_Object(ParseToken$CharConsumer(((t_ParseToken$CharConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CharConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg)
            {
              jchar a0;

              if (!parseArg(arg, "C", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c0f77b4878f385fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;)V");
          mids$[mid_init$_eaf1e6dc246e4e06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_41a826780212dfea] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0f77b4878f385fe, a0.this$)) {}

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eaf1e6dc246e4e06, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AggregatedPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_41a826780212dfea], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_AggregatedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregatedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_AggregatedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider, t_AggregatedPVCoordinatesProvider, AggregatedPVCoordinatesProvider);

      void t_AggregatedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider), module, "AggregatedPVCoordinatesProvider", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "InvalidPVProvider", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "Builder", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder)));
      }

      void t_AggregatedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider::wrap_Object(AggregatedPVCoordinatesProvider(((t_AggregatedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0, a1, a2));
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data)
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
#include "org/hipparchus/random/RandomAdaptor.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomAdaptor::class$ = NULL;
      jmethodID *RandomAdaptor::mids$ = NULL;
      bool RandomAdaptor::live$ = false;

      jclass RandomAdaptor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomAdaptor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_d7af9aedcdd3845b] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_02b241598e254a3f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_of_3ce1e585da81107a] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Ljava/util/Random;");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomAdaptor::RandomAdaptor(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::util::Random(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

      jboolean RandomAdaptor::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d7af9aedcdd3845b], a0.this$, a1, a2);
      }

      jdouble RandomAdaptor::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
      }

      jfloat RandomAdaptor::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
      }

      jdouble RandomAdaptor::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
      }

      jint RandomAdaptor::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      jint RandomAdaptor::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
      }

      jlong RandomAdaptor::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
      }

      jlong RandomAdaptor::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_02b241598e254a3f], a0);
      }

      ::java::util::Random RandomAdaptor::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Random(env->callStaticObjectMethod(cls, mids$[mid_of_3ce1e585da81107a], a0.this$));
      }

      void RandomAdaptor::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }

      void RandomAdaptor::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
      }

      void RandomAdaptor::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
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
      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args);
      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomAdaptor__fields_[] = {
        DECLARE_SET_FIELD(t_RandomAdaptor, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomAdaptor__methods_[] = {
        DECLARE_METHOD(t_RandomAdaptor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, of, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomAdaptor)[] = {
        { Py_tp_methods, t_RandomAdaptor__methods_ },
        { Py_tp_init, (void *) t_RandomAdaptor_init_ },
        { Py_tp_getset, t_RandomAdaptor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomAdaptor)[] = {
        &PY_TYPE_DEF(::java::util::Random),
        NULL
      };

      DEFINE_TYPE(RandomAdaptor, t_RandomAdaptor, RandomAdaptor);

      void t_RandomAdaptor::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomAdaptor), &PY_TYPE_DEF(RandomAdaptor), module, "RandomAdaptor", 0);
      }

      void t_RandomAdaptor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "class_", make_descriptor(RandomAdaptor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "wrapfn_", make_descriptor(t_RandomAdaptor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomAdaptor::initializeClass, 1)))
          return NULL;
        return t_RandomAdaptor::wrap_Object(RandomAdaptor(((t_RandomAdaptor *) arg)->object.this$));
      }
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomAdaptor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomAdaptor object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = RandomAdaptor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        ::java::util::Random result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomAdaptor::of(a0));
          return ::java::util::t_Random::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }

      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGammaMnsFunction::class$ = NULL;
            jmethodID *FieldGammaMnsFunction::mids$ = NULL;
            bool FieldGammaMnsFunction::live$ = false;

            jclass FieldGammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3a2e186de3b94400] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getDerivative_4f221dcfbd8744de] = env->getMethodID(cls, "getDerivative", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getValue_4f221dcfbd8744de] = env->getMethodID(cls, "getValue", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGammaMnsFunction::FieldGammaMnsFunction(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::hipparchus::Field & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3a2e186de3b94400, a0, a1.this$, a2, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_4f221dcfbd8744de], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_4f221dcfbd8744de], a0, a1, a2));
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
            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args);
            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data);
            static PyGetSetDef t_FieldGammaMnsFunction__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGammaMnsFunction, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_FieldGammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGammaMnsFunction)[] = {
              { Py_tp_methods, t_FieldGammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_FieldGammaMnsFunction_init_ },
              { Py_tp_getset, t_FieldGammaMnsFunction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGammaMnsFunction, t_FieldGammaMnsFunction, FieldGammaMnsFunction);
            PyObject *t_FieldGammaMnsFunction::wrap_Object(const FieldGammaMnsFunction& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGammaMnsFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGammaMnsFunction), &PY_TYPE_DEF(FieldGammaMnsFunction), module, "FieldGammaMnsFunction", 0);
            }

            void t_FieldGammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "class_", make_descriptor(FieldGammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "wrapfn_", make_descriptor(t_FieldGammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_FieldGammaMnsFunction::wrap_Object(FieldGammaMnsFunction(((t_FieldGammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::Field a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGammaMnsFunction(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
              return NULL;
            }
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data)
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
#include "org/orekit/utils/PythonStateFunction.h"
#include "org/orekit/utils/StateFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateFunction::class$ = NULL;
      jmethodID *PythonStateFunction::mids$ = NULL;
      bool PythonStateFunction::live$ = false;

      jclass PythonStateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_cb44069ef445f941] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateFunction::PythonStateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonStateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonStateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonStateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self);
      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args);
      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data);
      static PyGetSetDef t_PythonStateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonStateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateFunction)[] = {
        { Py_tp_methods, t_PythonStateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonStateFunction_init_ },
        { Py_tp_getset, t_PythonStateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateFunction, t_PythonStateFunction, PythonStateFunction);

      void t_PythonStateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateFunction), &PY_TYPE_DEF(PythonStateFunction), module, "PythonStateFunction", 1);
      }

      void t_PythonStateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "class_", make_descriptor(PythonStateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "wrapfn_", make_descriptor(t_PythonStateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonStateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonStateFunction::wrap_Object(PythonStateFunction(((t_PythonStateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonStateFunction object((jobject) NULL);

        INT_CALL(object = PythonStateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data)
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
#include "org/orekit/attitudes/TabulatedProvider.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedProvider::class$ = NULL;
      jmethodID *TabulatedProvider::mids$ = NULL;
      bool TabulatedProvider::live$ = false;

      jclass TabulatedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b54c4378f1b49120] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_53f1defe81182479] = env->getMethodID(cls, "<init>", "(Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/attitudes/AttitudeBuilder;)V");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedProvider::TabulatedProvider(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b54c4378f1b49120, a0.this$, a1.this$, a2, a3.this$)) {}

      TabulatedProvider::TabulatedProvider(const ::java::util::List & a0, jint a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::attitudes::AttitudeBuilder & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53f1defe81182479, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::attitudes::Attitude TabulatedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude TabulatedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
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
      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args);
      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data);
      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data);
      static PyGetSetDef t_TabulatedProvider__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedProvider, maxDate),
        DECLARE_GET_FIELD(t_TabulatedProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedProvider__methods_[] = {
        DECLARE_METHOD(t_TabulatedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedProvider)[] = {
        { Py_tp_methods, t_TabulatedProvider__methods_ },
        { Py_tp_init, (void *) t_TabulatedProvider_init_ },
        { Py_tp_getset, t_TabulatedProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedProvider, t_TabulatedProvider, TabulatedProvider);

      void t_TabulatedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedProvider), &PY_TYPE_DEF(TabulatedProvider), module, "TabulatedProvider", 0);
      }

      void t_TabulatedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "class_", make_descriptor(TabulatedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "wrapfn_", make_descriptor(t_TabulatedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedProvider::initializeClass, 1)))
          return NULL;
        return t_TabulatedProvider::wrap_Object(TabulatedProvider(((t_TabulatedProvider *) arg)->object.this$));
      }
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::attitudes::AttitudeBuilder a5((jobject) NULL);
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "KIKkkk", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeBuilder::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data)
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
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3::class$ = NULL;
        jmethodID *SP3::mids$ = NULL;
        bool SP3::live$ = false;

        jclass SP3::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_70a4bb39cd112135] = env->getMethodID(cls, "<init>", "(DILorg/orekit/frames/Frame;)V");
            mids$[mid_addSatellite_d0bc48d5b00dc40c] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
            mids$[mid_containsSatellite_7edad2c2f64f4d68] = env->getMethodID(cls, "containsSatellite", "(Ljava/lang/String;)Z");
            mids$[mid_getEphemeris_6f533a3154cab531] = env->getMethodID(cls, "getEphemeris", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getEphemeris_f4e447d71819a411] = env->getMethodID(cls, "getEphemeris", "(I)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getHeader_35c06998360669e6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/sp3/SP3Header;");
            mids$[mid_getSatelliteCount_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteCount", "()I");
            mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_splice_d952d8777f1add1e] = env->getStaticMethodID(cls, "splice", "(Ljava/util/Collection;)Lorg/orekit/files/sp3/SP3;");
            mids$[mid_validate_e180c5a079f07b98] = env->getMethodID(cls, "validate", "(ZLjava/lang/String;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3::SP3(jdouble a0, jint a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70a4bb39cd112135, a0, a1, a2.this$)) {}

        void SP3::addSatellite(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatellite_d0bc48d5b00dc40c], a0.this$);
        }

        jboolean SP3::containsSatellite(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_containsSatellite_7edad2c2f64f4d68], a0.this$);
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_6f533a3154cab531], a0.this$));
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(jint a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_f4e447d71819a411], a0));
        }

        ::org::orekit::files::sp3::SP3Header SP3::getHeader() const
        {
          return ::org::orekit::files::sp3::SP3Header(env->callObjectMethod(this$, mids$[mid_getHeader_35c06998360669e6]));
        }

        jint SP3::getSatelliteCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCount_570ce0828f81a2c1]);
        }

        ::java::util::Map SP3::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
        }

        SP3 SP3::splice(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3(env->callStaticObjectMethod(cls, mids$[mid_splice_d952d8777f1add1e], a0.this$));
        }

        void SP3::validate(jboolean a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_validate_e180c5a079f07b98], a0, a1.this$);
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
      namespace sp3 {
        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_getHeader(t_SP3 *self);
        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self);
        static PyObject *t_SP3_getSatellites(t_SP3 *self);
        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_get__header(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data);
        static PyGetSetDef t_SP3__fields_[] = {
          DECLARE_GET_FIELD(t_SP3, header),
          DECLARE_GET_FIELD(t_SP3, satelliteCount),
          DECLARE_GET_FIELD(t_SP3, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3__methods_[] = {
          DECLARE_METHOD(t_SP3, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, addSatellite, METH_O),
          DECLARE_METHOD(t_SP3, containsSatellite, METH_O),
          DECLARE_METHOD(t_SP3, getEphemeris, METH_VARARGS),
          DECLARE_METHOD(t_SP3, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatelliteCount, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_SP3, splice, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, validate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3)[] = {
          { Py_tp_methods, t_SP3__methods_ },
          { Py_tp_init, (void *) t_SP3_init_ },
          { Py_tp_getset, t_SP3__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3, t_SP3, SP3);

        void t_SP3::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3), &PY_TYPE_DEF(SP3), module, "SP3", 0);
        }

        void t_SP3::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "class_", make_descriptor(SP3::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "wrapfn_", make_descriptor(t_SP3::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3::initializeClass, 1)))
            return NULL;
          return t_SP3::wrap_Object(SP3(((t_SP3 *) arg)->object.this$));
        }
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jint a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          SP3 object((jobject) NULL);

          if (!parseArgs(args, "DIk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatellite(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.containsSatellite(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "containsSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEphemeris", args);
          return NULL;
        }

        static PyObject *t_SP3_getHeader(t_SP3 *self)
        {
          ::org::orekit::files::sp3::SP3Header result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(result);
        }

        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3_getSatellites(t_SP3 *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sp3::PY_TYPE(SP3Ephemeris));
        }

        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          SP3 result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3::splice(a0));
            return t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "splice", arg);
          return NULL;
        }

        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args)
        {
          jboolean a0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Zs", &a0, &a1))
          {
            OBJ_CALL(self->object.validate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "validate", args);
          return NULL;
        }

        static PyObject *t_SP3_get__header(t_SP3 *self, void *data)
        {
          ::org::orekit::files::sp3::SP3Header value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(value);
        }

        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStateInterpolator::class$ = NULL;
        jmethodID *FieldODEStateInterpolator::mids$ = NULL;
        bool FieldODEStateInterpolator::live$ = false;

        jclass FieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_ad18f3cde52c81b9] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_7194dd3ba3cbc7e8]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_ad18f3cde52c81b9], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_7194dd3ba3cbc7e8]));
        }

        jboolean FieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd]);
        }

        jboolean FieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        jboolean FieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd]);
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
      namespace sampling {
        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self);
        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data);
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_FieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_FieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_FieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStateInterpolator, t_FieldODEStateInterpolator, FieldODEStateInterpolator);
        PyObject *t_FieldODEStateInterpolator::wrap_Object(const FieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStateInterpolator *self = (t_FieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStateInterpolator), &PY_TYPE_DEF(FieldODEStateInterpolator), module, "FieldODEStateInterpolator", 0);
        }

        void t_FieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "class_", make_descriptor(FieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "wrapfn_", make_descriptor(t_FieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldODEStateInterpolator::wrap_Object(FieldODEStateInterpolator(((t_FieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStateInterpolator_of_(t_FieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStateInterpolator_getCurrentState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_getInterpolatedState(t_FieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStateInterpolator_getPreviousState(t_FieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEStateInterpolator_isCurrentStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isForward(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldODEStateInterpolator_isPreviousStateInterpolated(t_FieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldODEStateInterpolator_get__parameters_(t_FieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__currentStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__forward(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousState(t_FieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_FieldODEStateInterpolator_get__previousStateInterpolated(t_FieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/LUDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposition::class$ = NULL;
      jmethodID *LUDecomposition::mids$ = NULL;
      bool LUDecomposition::live$ = false;

      jclass LUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_21a79182f4dd9085] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getDeterminant_dff5885c2c873297] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_688b496048ff947b] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_688b496048ff947b] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPivot_d0635cea09dc178c] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_6b396ee5bc11943f] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_688b496048ff947b] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21a79182f4dd9085, a0.this$, a1)) {}

      jdouble LUDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_688b496048ff947b]));
      }

      JArray< jint > LUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_d0635cea09dc178c]));
      }

      ::org::hipparchus::linear::DecompositionSolver LUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6b396ee5bc11943f]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_688b496048ff947b]));
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
      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data);
      static PyGetSetDef t_LUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_LUDecomposition, determinant),
        DECLARE_GET_FIELD(t_LUDecomposition, l),
        DECLARE_GET_FIELD(t_LUDecomposition, p),
        DECLARE_GET_FIELD(t_LUDecomposition, pivot),
        DECLARE_GET_FIELD(t_LUDecomposition, solver),
        DECLARE_GET_FIELD(t_LUDecomposition, u),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LUDecomposition__methods_[] = {
        DECLARE_METHOD(t_LUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposition)[] = {
        { Py_tp_methods, t_LUDecomposition__methods_ },
        { Py_tp_init, (void *) t_LUDecomposition_init_ },
        { Py_tp_getset, t_LUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposition, t_LUDecomposition, LUDecomposition);

      void t_LUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposition), &PY_TYPE_DEF(LUDecomposition), module, "LUDecomposition", 0);
      }

      void t_LUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "class_", make_descriptor(LUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "wrapfn_", make_descriptor(t_LUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposition::initializeClass, 1)))
          return NULL;
        return t_LUDecomposition::wrap_Object(LUDecomposition(((t_LUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = LUDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LUDecomposition(a0, a1));
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

      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUpFactory.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUpFactory::class$ = NULL;
          jmethodID *WindUpFactory::mids$ = NULL;
          bool WindUpFactory::live$ = false;

          jclass WindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_2fa453eba50d8d3c] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/WindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WindUpFactory::WindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::orekit::estimation::measurements::gnss::WindUp WindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::estimation::measurements::gnss::WindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_2fa453eba50d8d3c], a0.this$, a1, a2.this$, a3.this$));
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
          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args);

          static PyMethodDef t_WindUpFactory__methods_[] = {
            DECLARE_METHOD(t_WindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUpFactory)[] = {
            { Py_tp_methods, t_WindUpFactory__methods_ },
            { Py_tp_init, (void *) t_WindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WindUpFactory, t_WindUpFactory, WindUpFactory);

          void t_WindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUpFactory), &PY_TYPE_DEF(WindUpFactory), module, "WindUpFactory", 0);
          }

          void t_WindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "class_", make_descriptor(WindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "wrapfn_", make_descriptor(t_WindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUpFactory::initializeClass, 1)))
              return NULL;
            return t_WindUpFactory::wrap_Object(WindUpFactory(((t_WindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            WindUpFactory object((jobject) NULL);

            INT_CALL(object = WindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::WindUp result((jobject) NULL);

            if (!parseArgs(args, "KIks", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::gnss::t_WindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteType::class$ = NULL;
        jmethodID *SatelliteType::mids$ = NULL;
        bool SatelliteType::live$ = false;
        SatelliteType *SatelliteType::BEIDOU_2G = NULL;
        SatelliteType *SatelliteType::BEIDOU_2I = NULL;
        SatelliteType *SatelliteType::BEIDOU_2M = NULL;
        SatelliteType *SatelliteType::BEIDOU_3G_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3I = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SM_CAST = NULL;
        SatelliteType *SatelliteType::BLOCK_I = NULL;
        SatelliteType *SatelliteType::BLOCK_II = NULL;
        SatelliteType *SatelliteType::BLOCK_IIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIF = NULL;
        SatelliteType *SatelliteType::BLOCK_IIIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_A = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_B = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_M = NULL;
        SatelliteType *SatelliteType::GALILEO_0A = NULL;
        SatelliteType *SatelliteType::GALILEO_0B = NULL;
        SatelliteType *SatelliteType::GALILEO_1 = NULL;
        SatelliteType *SatelliteType::GALILEO_2 = NULL;
        SatelliteType *SatelliteType::GLONASS = NULL;
        SatelliteType *SatelliteType::GLONASS_K1 = NULL;
        SatelliteType *SatelliteType::GLONASS_K2 = NULL;
        SatelliteType *SatelliteType::GLONASS_M = NULL;
        SatelliteType *SatelliteType::IRNSS_1GEO = NULL;
        SatelliteType *SatelliteType::IRNSS_1IGSO = NULL;
        SatelliteType *SatelliteType::QZSS = NULL;
        SatelliteType *SatelliteType::QZSS_2A = NULL;
        SatelliteType *SatelliteType::QZSS_2G = NULL;
        SatelliteType *SatelliteType::QZSS_2I = NULL;

        jclass SatelliteType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildAttitudeProvider_7af844e3d959d4c4] = env->getMethodID(cls, "buildAttitudeProvider", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;I)Lorg/orekit/gnss/attitude/GNSSAttitudeProvider;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_parseSatelliteType_2a3d5f737880f02e] = env->getStaticMethodID(cls, "parseSatelliteType", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_valueOf_2a3d5f737880f02e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_values_8db6d94a050f35e8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/antenna/SatelliteType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BEIDOU_2G = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2M = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3G_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3G_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SM_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SM_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_I = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_II = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_II", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIF = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIF", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_A = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_B = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_M = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0A = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0B = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_1 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_2 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS = new SatelliteType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K1 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K2 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_M = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1GEO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1GEO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1IGSO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1IGSO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS = new SatelliteType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2A = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2G = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2I = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::gnss::attitude::GNSSAttitudeProvider SatelliteType::buildAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3, jint a4) const
        {
          return ::org::orekit::gnss::attitude::GNSSAttitudeProvider(env->callObjectMethod(this$, mids$[mid_buildAttitudeProvider_7af844e3d959d4c4], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        ::java::lang::String SatelliteType::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        SatelliteType SatelliteType::parseSatelliteType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteType_2a3d5f737880f02e], a0.this$));
        }

        SatelliteType SatelliteType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2a3d5f737880f02e], a0.this$));
        }

        JArray< SatelliteType > SatelliteType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_8db6d94a050f35e8]));
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
      namespace antenna {
        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_getName(t_SatelliteType *self);
        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SatelliteType_values(PyTypeObject *type);
        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data);
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data);
        static PyGetSetDef t_SatelliteType__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteType, name),
          DECLARE_GET_FIELD(t_SatelliteType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteType__methods_[] = {
          DECLARE_METHOD(t_SatelliteType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, buildAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, getName, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteType, parseSatelliteType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteType)[] = {
          { Py_tp_methods, t_SatelliteType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SatelliteType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SatelliteType, t_SatelliteType, SatelliteType);
        PyObject *t_SatelliteType::wrap_Object(const SatelliteType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SatelliteType::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteType), &PY_TYPE_DEF(SatelliteType), module, "SatelliteType", 0);
        }

        void t_SatelliteType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "class_", make_descriptor(SatelliteType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "wrapfn_", make_descriptor(t_SatelliteType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SatelliteType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3G_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3G_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SM_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SM_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_II", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_II)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIF", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1GEO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1GEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1IGSO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1IGSO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2I)));
        }

        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteType::initializeClass, 1)))
            return NULL;
          return t_SatelliteType::wrap_Object(SatelliteType(((t_SatelliteType *) arg)->object.this$));
        }
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          jint a4;
          ::org::orekit::gnss::attitude::GNSSAttitudeProvider result((jobject) NULL);

          if (!parseArgs(args, "kkkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.buildAttitudeProvider(a0, a1, a2, a3, a4));
            return ::org::orekit::gnss::attitude::t_GNSSAttitudeProvider::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildAttitudeProvider", args);
          return NULL;
        }

        static PyObject *t_SatelliteType_getName(t_SatelliteType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::parseSatelliteType(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseSatelliteType", arg);
          return NULL;
        }

        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::valueOf(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SatelliteType_values(PyTypeObject *type)
        {
          JArray< SatelliteType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::values());
          return JArray<jobject>(result.this$).wrap(t_SatelliteType::wrap_jobject);
        }
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionMessage::class$ = NULL;
              jmethodID *RtcmCorrectionMessage::mids$ = NULL;
              bool RtcmCorrectionMessage::live$ = false;

              jclass RtcmCorrectionMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b2f23762280bbe6f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");
                  mids$[mid_getDataMap_6f5a75ccd8c04465] = env->getMethodID(cls, "getDataMap", "()Ljava/util/Map;");
                  mids$[mid_getHeader_93f61ca107b15f3c] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;");
                  mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionMessage::RtcmCorrectionMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_b2f23762280bbe6f, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map RtcmCorrectionMessage::getDataMap() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getDataMap_6f5a75ccd8c04465]));
              }

              ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader RtcmCorrectionMessage::getHeader() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->callObjectMethod(this$, mids$[mid_getHeader_93f61ca107b15f3c]));
              }

              ::org::orekit::gnss::SatelliteSystem RtcmCorrectionMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
              }
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args);
              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data);
              static PyGetSetDef t_RtcmCorrectionMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, dataMap),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, header),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getDataMap, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getHeader, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionMessage)[] = {
                { Py_tp_methods, t_RtcmCorrectionMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionMessage_init_ },
                { Py_tp_getset, t_RtcmCorrectionMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionMessage, t_RtcmCorrectionMessage, RtcmCorrectionMessage);
              PyObject *t_RtcmCorrectionMessage::wrap_Object(const RtcmCorrectionMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_RtcmCorrectionMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_RtcmCorrectionMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionMessage), &PY_TYPE_DEF(RtcmCorrectionMessage), module, "RtcmCorrectionMessage", 0);
              }

              void t_RtcmCorrectionMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "class_", make_descriptor(RtcmCorrectionMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "wrapfn_", make_descriptor(t_RtcmCorrectionMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionMessage::wrap_Object(RtcmCorrectionMessage(((t_RtcmCorrectionMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                RtcmCorrectionMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RtcmCorrectionMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader result((jobject) NULL);
                OBJ_CALL(result = self->object.getHeader());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereNequickGMessage::class$ = NULL;
          jmethodID *IonosphereNequickGMessage::mids$ = NULL;
          bool IonosphereNequickGMessage::live$ = false;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG = NULL;
          ::org::orekit::utils::units::Unit *IonosphereNequickGMessage::SFU_PER_DEG2 = NULL;

          jclass IonosphereNequickGMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereNequickGMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a82ff7a18fa6993f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAi0_dff5885c2c873297] = env->getMethodID(cls, "getAi0", "()D");
              mids$[mid_getAi1_dff5885c2c873297] = env->getMethodID(cls, "getAi1", "()D");
              mids$[mid_getAi2_dff5885c2c873297] = env->getMethodID(cls, "getAi2", "()D");
              mids$[mid_getFlags_570ce0828f81a2c1] = env->getMethodID(cls, "getFlags", "()I");
              mids$[mid_setAi0_17db3a65980d3441] = env->getMethodID(cls, "setAi0", "(D)V");
              mids$[mid_setAi1_17db3a65980d3441] = env->getMethodID(cls, "setAi1", "(D)V");
              mids$[mid_setAi2_17db3a65980d3441] = env->getMethodID(cls, "setAi2", "(D)V");
              mids$[mid_setFlags_99803b0791f320ff] = env->getMethodID(cls, "setFlags", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SFU = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG", "Lorg/orekit/utils/units/Unit;"));
              SFU_PER_DEG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SFU_PER_DEG2", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereNequickGMessage::IonosphereNequickGMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_a82ff7a18fa6993f, a0.this$, a1, a2.this$)) {}

          jdouble IonosphereNequickGMessage::getAi0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi0_dff5885c2c873297]);
          }

          jdouble IonosphereNequickGMessage::getAi1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi1_dff5885c2c873297]);
          }

          jdouble IonosphereNequickGMessage::getAi2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAi2_dff5885c2c873297]);
          }

          jint IonosphereNequickGMessage::getFlags() const
          {
            return env->callIntMethod(this$, mids$[mid_getFlags_570ce0828f81a2c1]);
          }

          void IonosphereNequickGMessage::setAi0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi0_17db3a65980d3441], a0);
          }

          void IonosphereNequickGMessage::setAi1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi1_17db3a65980d3441], a0);
          }

          void IonosphereNequickGMessage::setAi2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAi2_17db3a65980d3441], a0);
          }

          void IonosphereNequickGMessage::setFlags(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFlags_99803b0791f320ff], a0);
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
          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self);
          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg);
          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data);
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereNequickGMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai0),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai1),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, ai2),
            DECLARE_GETSET_FIELD(t_IonosphereNequickGMessage, flags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereNequickGMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereNequickGMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi0, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi1, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getAi2, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, getFlags, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi0, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi1, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setAi2, METH_O),
            DECLARE_METHOD(t_IonosphereNequickGMessage, setFlags, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereNequickGMessage)[] = {
            { Py_tp_methods, t_IonosphereNequickGMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereNequickGMessage_init_ },
            { Py_tp_getset, t_IonosphereNequickGMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereNequickGMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereNequickGMessage, t_IonosphereNequickGMessage, IonosphereNequickGMessage);

          void t_IonosphereNequickGMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereNequickGMessage), &PY_TYPE_DEF(IonosphereNequickGMessage), module, "IonosphereNequickGMessage", 0);
          }

          void t_IonosphereNequickGMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "class_", make_descriptor(IonosphereNequickGMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "wrapfn_", make_descriptor(t_IonosphereNequickGMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereNequickGMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereNequickGMessage), "SFU_PER_DEG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*IonosphereNequickGMessage::SFU_PER_DEG2)));
          }

          static PyObject *t_IonosphereNequickGMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereNequickGMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereNequickGMessage::wrap_Object(IonosphereNequickGMessage(((t_IonosphereNequickGMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereNequickGMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereNequickGMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereNequickGMessage_init_(t_IonosphereNequickGMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereNequickGMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereNequickGMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereNequickGMessage_getAi0(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi1(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getAi2(t_IonosphereNequickGMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAi2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IonosphereNequickGMessage_getFlags(t_IonosphereNequickGMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFlags());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_IonosphereNequickGMessage_setAi0(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi0", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi1(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi1", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setAi2(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAi2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAi2", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_setFlags(t_IonosphereNequickGMessage *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setFlags(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFlags", arg);
            return NULL;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai0(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai0(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai0", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai1(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai1(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai1", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__ai2(t_IonosphereNequickGMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAi2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_IonosphereNequickGMessage_set__ai2(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAi2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ai2", arg);
            return -1;
          }

          static PyObject *t_IonosphereNequickGMessage_get__flags(t_IonosphereNequickGMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFlags());
            return PyLong_FromLong((long) value);
          }
          static int t_IonosphereNequickGMessage_set__flags(t_IonosphereNequickGMessage *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setFlags(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "flags", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialSplineFunction::class$ = NULL;
        jmethodID *PolynomialSplineFunction::mids$ = NULL;
        bool PolynomialSplineFunction::live$ = false;

        jclass PolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9018bf358367e5d6] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getKnots_60c7040667a7dc5c] = env->getMethodID(cls, "getKnots", "()[D");
            mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_02eeb9e6c0dfd60f] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_isValidPoint_2e401133981893e4] = env->getMethodID(cls, "isValidPoint", "(D)Z");
            mids$[mid_polynomialSplineDerivative_0dc7302672c3994b] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialSplineFunction::PolynomialSplineFunction(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9018bf358367e5d6, a0.this$, a1.this$)) {}

        JArray< jdouble > PolynomialSplineFunction::getKnots() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKnots_60c7040667a7dc5c]));
        }

        jint PolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_02eeb9e6c0dfd60f]));
        }

        jboolean PolynomialSplineFunction::isValidPoint(jdouble a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_2e401133981893e4], a0);
        }

        PolynomialSplineFunction PolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_0dc7302672c3994b]));
        }

        jdouble PolynomialSplineFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialSplineFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
      namespace polynomials {
        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self);
        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data);
        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_PolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_PolynomialSplineFunction, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_PolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_PolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSplineFunction)[] = {
          { Py_tp_methods, t_PolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_PolynomialSplineFunction_init_ },
          { Py_tp_getset, t_PolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialSplineFunction, t_PolynomialSplineFunction, PolynomialSplineFunction);

        void t_PolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSplineFunction), &PY_TYPE_DEF(PolynomialSplineFunction), module, "PolynomialSplineFunction", 0);
        }

        void t_PolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "class_", make_descriptor(PolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "wrapfn_", make_descriptor(t_PolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_PolynomialSplineFunction::wrap_Object(PolynomialSplineFunction(((t_PolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialSplineFunction_init_(t_PolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);
          PolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialSplineFunction_getKnots(t_PolynomialSplineFunction *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return result.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_getN(t_PolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialSplineFunction_getPolynomials(t_PolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_PolynomialSplineFunction_isValidPoint(t_PolynomialSplineFunction *self, PyObject *arg)
        {
          jdouble a0;
          jboolean result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_PolynomialSplineFunction_polynomialSplineDerivative(t_PolynomialSplineFunction *self)
        {
          PolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_PolynomialSplineFunction::wrap_Object(result);
        }

        static PyObject *t_PolynomialSplineFunction_value(t_PolynomialSplineFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_PolynomialSplineFunction_get__knots(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return value.wrap();
        }

        static PyObject *t_PolynomialSplineFunction_get__n(t_PolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PolynomialSplineFunction_get__polynomials(t_PolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractUnivariateSolver::class$ = NULL;
        jmethodID *AbstractUnivariateSolver::mids$ = NULL;
        bool AbstractUnivariateSolver::live$ = false;

        jclass AbstractUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractUnivariateSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args);
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data);
        static PyGetSetDef t_AbstractUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateSolver)[] = {
          { Py_tp_methods, t_AbstractUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateSolver, t_AbstractUnivariateSolver, AbstractUnivariateSolver);
        PyObject *t_AbstractUnivariateSolver::wrap_Object(const AbstractUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractUnivariateSolver *self = (t_AbstractUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateSolver), &PY_TYPE_DEF(AbstractUnivariateSolver), module, "AbstractUnivariateSolver", 0);
        }

        void t_AbstractUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "class_", make_descriptor(AbstractUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "wrapfn_", make_descriptor(t_AbstractUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateSolver::wrap_Object(AbstractUnivariateSolver(((t_AbstractUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateSolver_of_(t_AbstractUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractUnivariateSolver_get__parameters_(t_AbstractUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmParser::class$ = NULL;
            jmethodID *CdmParser::mids$ = NULL;
            bool CdmParser::live$ = false;

            jclass CdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_0249af82f959c1eb] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/cdm/Cdm;");
                mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_a2f99c13b713dc74] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;");
                mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::cdm::Cdm CdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Cdm(env->callObjectMethod(this$, mids$[mid_build_0249af82f959c1eb]));
            }

            jboolean CdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
            }

            jboolean CdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
            }

            jboolean CdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmHeader CdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_a2f99c13b713dc74]));
            }

            jboolean CdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
            }

            jboolean CdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
            }

            jboolean CdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
            }

            jboolean CdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
            }

            jboolean CdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
            }

            jboolean CdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
            }

            void CdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
          namespace cdm {
            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data);
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data);
            static PyGetSetDef t_CdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_CdmParser, header),
              DECLARE_GET_FIELD(t_CdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmParser__methods_[] = {
              DECLARE_METHOD(t_CdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmParser)[] = {
              { Py_tp_methods, t_CdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(CdmParser, t_CdmParser, CdmParser);
            PyObject *t_CdmParser::wrap_Object(const CdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_CdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_CdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmParser), &PY_TYPE_DEF(CdmParser), module, "CdmParser", 0);
            }

            void t_CdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "class_", make_descriptor(CdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "wrapfn_", make_descriptor(t_CdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmParser::initializeClass, 1)))
                return NULL;
              return t_CdmParser::wrap_Object(CdmParser(((t_CdmParser *) arg)->object.this$));
            }
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Cdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonSwitchHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonSwitchHandler::class$ = NULL;
      jmethodID *PythonSwitchHandler::mids$ = NULL;
      bool PythonSwitchHandler::live$ = false;

      jclass PythonSwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonSwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_switchOccurred_0bf4342ddf7e9645] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSwitchHandler::PythonSwitchHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonSwitchHandler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonSwitchHandler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonSwitchHandler::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self);
      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args);
      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data);
      static PyGetSetDef t_PythonSwitchHandler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSwitchHandler, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSwitchHandler__methods_[] = {
        DECLARE_METHOD(t_PythonSwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSwitchHandler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSwitchHandler)[] = {
        { Py_tp_methods, t_PythonSwitchHandler__methods_ },
        { Py_tp_init, (void *) t_PythonSwitchHandler_init_ },
        { Py_tp_getset, t_PythonSwitchHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSwitchHandler, t_PythonSwitchHandler, PythonSwitchHandler);

      void t_PythonSwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSwitchHandler), &PY_TYPE_DEF(PythonSwitchHandler), module, "PythonSwitchHandler", 1);
      }

      void t_PythonSwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "class_", make_descriptor(PythonSwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "wrapfn_", make_descriptor(t_PythonSwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSwitchHandler::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonSwitchHandler_pythonDecRef0 },
          { "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSwitchHandler_switchOccurred1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSwitchHandler::initializeClass, 1)))
          return NULL;
        return t_PythonSwitchHandler::wrap_Object(PythonSwitchHandler(((t_PythonSwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds)
      {
        PythonSwitchHandler object((jobject) NULL);

        INT_CALL(object = PythonSwitchHandler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args)
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

      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *o1 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a1));
        PyObject *o2 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a2));
        PyObject *result = PyObject_CallMethod(obj, "switchOccurred", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data)
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
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatelliteSystem::class$ = NULL;
      jmethodID *SatelliteSystem::mids$ = NULL;
      bool SatelliteSystem::live$ = false;
      SatelliteSystem *SatelliteSystem::BEIDOU = NULL;
      SatelliteSystem *SatelliteSystem::GALILEO = NULL;
      SatelliteSystem *SatelliteSystem::GLONASS = NULL;
      SatelliteSystem *SatelliteSystem::GPS = NULL;
      SatelliteSystem *SatelliteSystem::IRNSS = NULL;
      SatelliteSystem *SatelliteSystem::MIXED = NULL;
      SatelliteSystem *SatelliteSystem::QZSS = NULL;
      SatelliteSystem *SatelliteSystem::SBAS = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_A = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_B = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_D = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_F = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_H = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_K = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_L = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_N = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_O = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_P = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Q = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_T = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_U = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_V = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_W = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_X = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Y = NULL;
      SatelliteSystem *SatelliteSystem::USER_DEFINED_Z = NULL;

      jclass SatelliteSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatelliteSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_7818f5b58320cd1f] = env->getMethodID(cls, "getKey", "()C");
          mids$[mid_getObservationTimeScale_fa7257fa8a64a129] = env->getMethodID(cls, "getObservationTimeScale", "()Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_parseSatelliteSystem_59a293910798a367] = env->getStaticMethodID(cls, "parseSatelliteSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_parseSatelliteSystemWithGPSDefault_59a293910798a367] = env->getStaticMethodID(cls, "parseSatelliteSystemWithGPSDefault", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_valueOf_59a293910798a367] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_values_335dac96c43b203c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SatelliteSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new SatelliteSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/SatelliteSystem;"));
          GALILEO = new SatelliteSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/SatelliteSystem;"));
          GLONASS = new SatelliteSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/SatelliteSystem;"));
          GPS = new SatelliteSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/SatelliteSystem;"));
          IRNSS = new SatelliteSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          MIXED = new SatelliteSystem(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/gnss/SatelliteSystem;"));
          QZSS = new SatelliteSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/SatelliteSystem;"));
          SBAS = new SatelliteSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_A = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_A", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_B = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_B", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_D = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_D", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_F = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_F", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_H = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_H", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_K = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_K", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_L = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_L", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_N = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_N", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_O = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_O", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_P = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_P", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Q = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Q", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_T = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_T", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_U = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_U", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_V = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_V", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_W = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_W", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_X = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_X", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Y = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Y", "Lorg/orekit/gnss/SatelliteSystem;"));
          USER_DEFINED_Z = new SatelliteSystem(env->getStaticObjectField(cls, "USER_DEFINED_Z", "Lorg/orekit/gnss/SatelliteSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jchar SatelliteSystem::getKey() const
      {
        return env->callCharMethod(this$, mids$[mid_getKey_7818f5b58320cd1f]);
      }

      ::org::orekit::gnss::ObservationTimeScale SatelliteSystem::getObservationTimeScale() const
      {
        return ::org::orekit::gnss::ObservationTimeScale(env->callObjectMethod(this$, mids$[mid_getObservationTimeScale_fa7257fa8a64a129]));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystem_59a293910798a367], a0.this$));
      }

      SatelliteSystem SatelliteSystem::parseSatelliteSystemWithGPSDefault(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteSystemWithGPSDefault_59a293910798a367], a0.this$));
      }

      SatelliteSystem SatelliteSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_59a293910798a367], a0.this$));
      }

      JArray< SatelliteSystem > SatelliteSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SatelliteSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_335dac96c43b203c]));
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
      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args);
      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self);
      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SatelliteSystem_values(PyTypeObject *type);
      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data);
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data);
      static PyGetSetDef t_SatelliteSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteSystem, key),
        DECLARE_GET_FIELD(t_SatelliteSystem, observationTimeScale),
        DECLARE_GET_FIELD(t_SatelliteSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteSystem__methods_[] = {
        DECLARE_METHOD(t_SatelliteSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, getObservationTimeScale, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, parseSatelliteSystemWithGPSDefault, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SatelliteSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteSystem)[] = {
        { Py_tp_methods, t_SatelliteSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SatelliteSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SatelliteSystem, t_SatelliteSystem, SatelliteSystem);
      PyObject *t_SatelliteSystem::wrap_Object(const SatelliteSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SatelliteSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SatelliteSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SatelliteSystem *self = (t_SatelliteSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SatelliteSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteSystem), &PY_TYPE_DEF(SatelliteSystem), module, "SatelliteSystem", 0);
      }

      void t_SatelliteSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "class_", make_descriptor(SatelliteSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "wrapfn_", make_descriptor(t_SatelliteSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(SatelliteSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "BEIDOU", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GALILEO", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GLONASS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "GPS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "IRNSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "MIXED", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::MIXED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "QZSS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "SBAS", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_A", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_B", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_D", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_F", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_F)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_H", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_H)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_K", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_L", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_N", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_O", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_O)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_P", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Q", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_T", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_T)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_U", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_U)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_V", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_V)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_W", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_X", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Y", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteSystem), "USER_DEFINED_Z", make_descriptor(t_SatelliteSystem::wrap_Object(*SatelliteSystem::USER_DEFINED_Z)));
      }

      static PyObject *t_SatelliteSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteSystem::initializeClass, 1)))
          return NULL;
        return t_SatelliteSystem::wrap_Object(SatelliteSystem(((t_SatelliteSystem *) arg)->object.this$));
      }
      static PyObject *t_SatelliteSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SatelliteSystem_of_(t_SatelliteSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SatelliteSystem_getKey(t_SatelliteSystem *self)
      {
        jchar result;
        OBJ_CALL(result = self->object.getKey());
        return c2p(result);
      }

      static PyObject *t_SatelliteSystem_getObservationTimeScale(t_SatelliteSystem *self)
      {
        ::org::orekit::gnss::ObservationTimeScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(result);
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystem(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystem", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_parseSatelliteSystemWithGPSDefault(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::parseSatelliteSystemWithGPSDefault(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseSatelliteSystemWithGPSDefault", arg);
        return NULL;
      }

      static PyObject *t_SatelliteSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SatelliteSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::valueOf(a0));
          return t_SatelliteSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SatelliteSystem_values(PyTypeObject *type)
      {
        JArray< SatelliteSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SatelliteSystem::values());
        return JArray<jobject>(result.this$).wrap(t_SatelliteSystem::wrap_jobject);
      }
      static PyObject *t_SatelliteSystem_get__parameters_(t_SatelliteSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SatelliteSystem_get__key(t_SatelliteSystem *self, void *data)
      {
        jchar value;
        OBJ_CALL(value = self->object.getKey());
        return c2p(value);
      }

      static PyObject *t_SatelliteSystem_get__observationTimeScale(t_SatelliteSystem *self, void *data)
      {
        ::org::orekit::gnss::ObservationTimeScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservationTimeScale());
        return ::org::orekit::gnss::t_ObservationTimeScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldFunctionalDetector::class$ = NULL;
        jmethodID *FieldFunctionalDetector::mids$ = NULL;
        bool FieldFunctionalDetector::live$ = false;

        jclass FieldFunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldFunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_d4d3c083af51acc5] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldFunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldFunctionalDetector::FieldFunctionalDetector(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldFunctionalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
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
        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args);
        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args);
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data);
        static PyGetSetDef t_FieldFunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldFunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldFunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldFunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldFunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldFunctionalDetector)[] = {
          { Py_tp_methods, t_FieldFunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldFunctionalDetector_init_ },
          { Py_tp_getset, t_FieldFunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldFunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldFunctionalDetector, t_FieldFunctionalDetector, FieldFunctionalDetector);
        PyObject *t_FieldFunctionalDetector::wrap_Object(const FieldFunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldFunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldFunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldFunctionalDetector), &PY_TYPE_DEF(FieldFunctionalDetector), module, "FieldFunctionalDetector", 0);
        }

        void t_FieldFunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "class_", make_descriptor(FieldFunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "wrapfn_", make_descriptor(t_FieldFunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldFunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldFunctionalDetector::wrap_Object(FieldFunctionalDetector(((t_FieldFunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldFunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldFunctionalDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            INT_CALL(object = FieldFunctionalDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldFunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractDualFrequencyCombination::mids$ = NULL;
          bool PythonAbstractDualFrequencyCombination::live$ = false;

          jclass PythonAbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5f9f97930f6e42c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedFrequency_6baf140b93832af8] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedValue_e0f2baaf2a2ab093] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractDualFrequencyCombination::PythonAbstractDualFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_5f9f97930f6e42c6, a0.this$, a1.this$)) {}

          void PythonAbstractDualFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractDualFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractDualFrequencyCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self);
          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractDualFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractDualFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractDualFrequencyCombination, t_PythonAbstractDualFrequencyCombination, PythonAbstractDualFrequencyCombination);

          void t_PythonAbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractDualFrequencyCombination), &PY_TYPE_DEF(PythonAbstractDualFrequencyCombination), module, "PythonAbstractDualFrequencyCombination", 1);
          }

          void t_PythonAbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "class_", make_descriptor(PythonAbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractDualFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0 },
              { "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedValue1 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractDualFrequencyCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractDualFrequencyCombination::wrap_Object(PythonAbstractDualFrequencyCombination(((t_PythonAbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractDualFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractDualFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a0));
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedFrequency", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedFrequency", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *o3 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a3));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dOdO", (double) a0, o1, (double) a2, o3);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/BasicScanAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *BasicScanAlgorithm::class$ = NULL;
        jmethodID *BasicScanAlgorithm::mids$ = NULL;
        bool BasicScanAlgorithm::live$ = false;

        jclass BasicScanAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/BasicScanAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c55751d7ccd4d962] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getAlgorithmId_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_86ffecc08a63eff0] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_943aab8456e3784b] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_860353a3ab3d03aa] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BasicScanAlgorithm::BasicScanAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c55751d7ccd4d962, a0.this$, a1)) {}

        ::org::orekit::rugged::api::AlgorithmId BasicScanAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_da9f33328b8f3962]));
        }

        jdouble BasicScanAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_86ffecc08a63eff0], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_943aab8456e3784b], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_860353a3ab3d03aa], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self);
        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data);
        static PyGetSetDef t_BasicScanAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_BasicScanAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BasicScanAlgorithm__methods_[] = {
          DECLARE_METHOD(t_BasicScanAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BasicScanAlgorithm)[] = {
          { Py_tp_methods, t_BasicScanAlgorithm__methods_ },
          { Py_tp_init, (void *) t_BasicScanAlgorithm_init_ },
          { Py_tp_getset, t_BasicScanAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BasicScanAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BasicScanAlgorithm, t_BasicScanAlgorithm, BasicScanAlgorithm);

        void t_BasicScanAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(BasicScanAlgorithm), &PY_TYPE_DEF(BasicScanAlgorithm), module, "BasicScanAlgorithm", 0);
        }

        void t_BasicScanAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "class_", make_descriptor(BasicScanAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "wrapfn_", make_descriptor(t_BasicScanAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BasicScanAlgorithm::initializeClass, 1)))
            return NULL;
          return t_BasicScanAlgorithm::wrap_Object(BasicScanAlgorithm(((t_BasicScanAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BasicScanAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          BasicScanAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BasicScanAlgorithm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CircularOrbit::class$ = NULL;
      jmethodID *CircularOrbit::mids$ = NULL;
      bool CircularOrbit::live$ = false;

      jclass CircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7753eee512deef45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_17efd10b0f16bc37] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_e66c4b38c78e70c5] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_6d75b48985bb90e6] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_f2365c7dd61a1cda] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_8c19bdea212fe058] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_8c19bdea212fe058] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAlpha_2152aeb78bde0282] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaDot_2152aeb78bde0282] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaE_dff5885c2c873297] = env->getMethodID(cls, "getAlphaE", "()D");
          mids$[mid_getAlphaEDot_dff5885c2c873297] = env->getMethodID(cls, "getAlphaEDot", "()D");
          mids$[mid_getAlphaM_dff5885c2c873297] = env->getMethodID(cls, "getAlphaM", "()D");
          mids$[mid_getAlphaMDot_dff5885c2c873297] = env->getMethodID(cls, "getAlphaMDot", "()D");
          mids$[mid_getAlphaV_dff5885c2c873297] = env->getMethodID(cls, "getAlphaV", "()D");
          mids$[mid_getAlphaVDot_dff5885c2c873297] = env->getMethodID(cls, "getAlphaVDot", "()D");
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_dff5885c2c873297] = env->getMethodID(cls, "getCircularEx", "()D");
          mids$[mid_getCircularExDot_dff5885c2c873297] = env->getMethodID(cls, "getCircularExDot", "()D");
          mids$[mid_getCircularEy_dff5885c2c873297] = env->getMethodID(cls, "getCircularEy", "()D");
          mids$[mid_getCircularEyDot_dff5885c2c873297] = env->getMethodID(cls, "getCircularEyDot", "()D");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_dff5885c2c873297] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_dff5885c2c873297] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_dff5885c2c873297] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_dff5885c2c873297] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_dff5885c2c873297] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_dff5885c2c873297] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_dff5885c2c873297] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_dff5885c2c873297] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_dff5885c2c873297] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_dff5885c2c873297] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_dff5885c2c873297] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_8c19bdea212fe058] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_25661094a9b1d547] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_shiftedBy_6422aa1344aec8d7] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_8c19bdea212fe058] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_d52645e0d4c07563] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_0358d8ea02f2cdb1] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CircularOrbit::CircularOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7753eee512deef45, a0.this$, a1.this$, a2)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17efd10b0f16bc37, a0.this$, a1.this$, a2.this$, a3)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_e66c4b38c78e70c5, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6d75b48985bb90e6, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void CircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_f2365c7dd61a1cda], a0.this$, a1, a2.this$);
      }

      jdouble CircularOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_8c19bdea212fe058], a0, a1, a2);
      }

      jdouble CircularOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_8c19bdea212fe058], a0, a1, a2);
      }

      jdouble CircularOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlpha_2152aeb78bde0282], a0.this$);
      }

      jdouble CircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaDot_2152aeb78bde0282], a0.this$);
      }

      jdouble CircularOrbit::getAlphaE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaE_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getAlphaEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaEDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getAlphaM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaM_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getAlphaMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaMDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getAlphaV() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaV_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getAlphaVDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaVDot_dff5885c2c873297]);
      }

      ::org::orekit::orbits::PositionAngleType CircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      jdouble CircularOrbit::getCircularEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEx_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getCircularExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularExDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getCircularEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEy_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getCircularEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEyDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_dff5885c2c873297]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_dff5885c2c873297]);
      }

      ::org::orekit::orbits::OrbitType CircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean CircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      jdouble CircularOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_8c19bdea212fe058], a0, a1, a2);
      }

      CircularOrbit CircularOrbit::removeRates() const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_25661094a9b1d547]));
      }

      CircularOrbit CircularOrbit::shiftedBy(jdouble a0) const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_6422aa1344aec8d7], a0));
      }

      ::java::lang::String CircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      jdouble CircularOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_8c19bdea212fe058], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data);
      static PyGetSetDef t_CircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CircularOrbit, a),
        DECLARE_GET_FIELD(t_CircularOrbit, aDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_CircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_CircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, e),
        DECLARE_GET_FIELD(t_CircularOrbit, eDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hx),
        DECLARE_GET_FIELD(t_CircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hy),
        DECLARE_GET_FIELD(t_CircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, i),
        DECLARE_GET_FIELD(t_CircularOrbit, iDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lE),
        DECLARE_GET_FIELD(t_CircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lM),
        DECLARE_GET_FIELD(t_CircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lv),
        DECLARE_GET_FIELD(t_CircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_CircularOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CircularOrbit__methods_[] = {
        DECLARE_METHOD(t_CircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CircularOrbit)[] = {
        { Py_tp_methods, t_CircularOrbit__methods_ },
        { Py_tp_init, (void *) t_CircularOrbit_init_ },
        { Py_tp_getset, t_CircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CircularOrbit, t_CircularOrbit, CircularOrbit);

      void t_CircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CircularOrbit), &PY_TYPE_DEF(CircularOrbit), module, "CircularOrbit", 0);
      }

      void t_CircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "class_", make_descriptor(CircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "wrapfn_", make_descriptor(t_CircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CircularOrbit::initializeClass, 1)))
          return NULL;
        return t_CircularOrbit::wrap_Object(CircularOrbit(((t_CircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaV());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self)
      {
        CircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_CircularOrbit::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble a0;
        CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaV());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D::class$ = NULL;
          jmethodID *Sphere1D::mids$ = NULL;
          bool Sphere1D::live$ = false;
          jdouble Sphere1D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_17db3a65980d3441] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_1bd6b4665a0d1abd] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");
              mids$[mid_getSubSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere1D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_17db3a65980d3441], a0);
          }

          jint Sphere1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          Sphere1D Sphere1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_1bd6b4665a0d1abd]));
          }

          ::org::hipparchus::geometry::Space Sphere1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_ebbd6b2d39ab0e4f]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self);
          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self);
          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data);
          static PyGetSetDef t_Sphere1D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere1D, dimension),
            DECLARE_GET_FIELD(t_Sphere1D, instance),
            DECLARE_GET_FIELD(t_Sphere1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere1D__methods_[] = {
            DECLARE_METHOD(t_Sphere1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D)[] = {
            { Py_tp_methods, t_Sphere1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere1D, t_Sphere1D, Sphere1D);

          void t_Sphere1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D), &PY_TYPE_DEF(Sphere1D), module, "Sphere1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Sphere1D$NoSubSpaceException)));
          }

          void t_Sphere1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "class_", make_descriptor(Sphere1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "wrapfn_", make_descriptor(t_Sphere1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "SMALLEST_TOLERANCE", make_descriptor(Sphere1D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D::initializeClass, 1)))
              return NULL;
            return t_Sphere1D::wrap_Object(Sphere1D(((t_Sphere1D *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::oned::Sphere1D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type)
          {
            Sphere1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::Sphere1D::getInstance());
            return t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data)
          {
            Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere1D::wrap_Object(value);
          }

          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *LongConsumer::class$ = NULL;
      jmethodID *LongConsumer::mids$ = NULL;
      bool LongConsumer::live$ = false;

      jclass LongConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/LongConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_3a8e7649f31fdb20] = env->getMethodID(cls, "accept", "(J)V");
          mids$[mid_andThen_318a11dbce7d6e3d] = env->getMethodID(cls, "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LongConsumer::accept(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_3a8e7649f31fdb20], a0);
      }

      LongConsumer LongConsumer::andThen(const LongConsumer & a0) const
      {
        return LongConsumer(env->callObjectMethod(this$, mids$[mid_andThen_318a11dbce7d6e3d], a0.this$));
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
      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg);
      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg);

      static PyMethodDef t_LongConsumer__methods_[] = {
        DECLARE_METHOD(t_LongConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, accept, METH_O),
        DECLARE_METHOD(t_LongConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongConsumer)[] = {
        { Py_tp_methods, t_LongConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LongConsumer, t_LongConsumer, LongConsumer);

      void t_LongConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(LongConsumer), &PY_TYPE_DEF(LongConsumer), module, "LongConsumer", 0);
      }

      void t_LongConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "class_", make_descriptor(LongConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "wrapfn_", make_descriptor(t_LongConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongConsumer::initializeClass, 1)))
          return NULL;
        return t_LongConsumer::wrap_Object(LongConsumer(((t_LongConsumer *) arg)->object.this$));
      }
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg)
      {
        LongConsumer a0((jobject) NULL);
        LongConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", LongConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_LongConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolator::class$ = NULL;
        jmethodID *BicubicInterpolator::mids$ = NULL;
        bool BicubicInterpolator::live$ = false;

        jclass BicubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_73e510fd41791282] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/BicubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolator::BicubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction BicubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_73e510fd41791282], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolator)[] = {
          { Py_tp_methods, t_BicubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolator, t_BicubicInterpolator, BicubicInterpolator);

        void t_BicubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolator), &PY_TYPE_DEF(BicubicInterpolator), module, "BicubicInterpolator", 0);
        }

        void t_BicubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "class_", make_descriptor(BicubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "wrapfn_", make_descriptor(t_BicubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolator::wrap_Object(BicubicInterpolator(((t_BicubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolator_init_(t_BicubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          BicubicInterpolator object((jobject) NULL);

          INT_CALL(object = BicubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_BicubicInterpolator_interpolate(t_BicubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::BicubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_BicubicInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovariance::class$ = NULL;
              jmethodID *OrbitCovariance::mids$ = NULL;
              bool OrbitCovariance::live$ = false;

              jclass OrbitCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c685172ae668527f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_688b496048ff947b] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getType_f6a584069fbe1b12] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovariance::OrbitCovariance(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c685172ae668527f, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::time::AbsoluteDate OrbitCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              ::org::hipparchus::linear::RealMatrix OrbitCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_688b496048ff947b]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType OrbitCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType(env->callObjectMethod(this$, mids$[mid_getType_f6a584069fbe1b12]));
              }
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
            namespace ocm {
              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self);
              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data);
              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data);
              static PyGetSetDef t_OrbitCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovariance, date),
                DECLARE_GET_FIELD(t_OrbitCovariance, matrix),
                DECLARE_GET_FIELD(t_OrbitCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovariance__methods_[] = {
                DECLARE_METHOD(t_OrbitCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovariance)[] = {
                { Py_tp_methods, t_OrbitCovariance__methods_ },
                { Py_tp_init, (void *) t_OrbitCovariance_init_ },
                { Py_tp_getset, t_OrbitCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovariance, t_OrbitCovariance, OrbitCovariance);

              void t_OrbitCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovariance), &PY_TYPE_DEF(OrbitCovariance), module, "OrbitCovariance", 0);
              }

              void t_OrbitCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "class_", make_descriptor(OrbitCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "wrapfn_", make_descriptor(t_OrbitCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovariance::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovariance::wrap_Object(OrbitCovariance(((t_OrbitCovariance *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovariance_init_(t_OrbitCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                OrbitCovariance object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ordering::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = OrbitCovariance(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovariance_getDate(t_OrbitCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getMatrix(t_OrbitCovariance *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_getType(t_OrbitCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(result);
              }

              static PyObject *t_OrbitCovariance_get__date(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__matrix(t_OrbitCovariance *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitCovariance_get__type(t_OrbitCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitElementsType::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/File.h"
#include "java/io/FileFilter.h"
#include "java/io/FilenameFilter.h"
#include "java/io/IOException.h"
#include "java/io/Serializable.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *File::class$ = NULL;
    jmethodID *File::mids$ = NULL;
    bool File::live$ = false;
    ::java::lang::String *File::pathSeparator = NULL;
    jchar File::pathSeparatorChar = (jchar) 0;
    ::java::lang::String *File::separator = NULL;
    jchar File::separatorChar = (jchar) 0;

    jclass File::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/File");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_94ced6352b9e37c8] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_canExecute_b108b35ef48e27bd] = env->getMethodID(cls, "canExecute", "()Z");
        mids$[mid_canRead_b108b35ef48e27bd] = env->getMethodID(cls, "canRead", "()Z");
        mids$[mid_canWrite_b108b35ef48e27bd] = env->getMethodID(cls, "canWrite", "()Z");
        mids$[mid_compareTo_2d89c7a20a7ed0cc] = env->getMethodID(cls, "compareTo", "(Ljava/io/File;)I");
        mids$[mid_createNewFile_b108b35ef48e27bd] = env->getMethodID(cls, "createNewFile", "()Z");
        mids$[mid_createTempFile_60a5214aca0ff7ec] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;");
        mids$[mid_createTempFile_d8d960d2f4a3a8b9] = env->getStaticMethodID(cls, "createTempFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;");
        mids$[mid_delete_b108b35ef48e27bd] = env->getMethodID(cls, "delete", "()Z");
        mids$[mid_deleteOnExit_0fa09c18fee449d5] = env->getMethodID(cls, "deleteOnExit", "()V");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_exists_b108b35ef48e27bd] = env->getMethodID(cls, "exists", "()Z");
        mids$[mid_getAbsoluteFile_a570d7db18cb9fa8] = env->getMethodID(cls, "getAbsoluteFile", "()Ljava/io/File;");
        mids$[mid_getAbsolutePath_11b109bd155ca898] = env->getMethodID(cls, "getAbsolutePath", "()Ljava/lang/String;");
        mids$[mid_getCanonicalFile_a570d7db18cb9fa8] = env->getMethodID(cls, "getCanonicalFile", "()Ljava/io/File;");
        mids$[mid_getCanonicalPath_11b109bd155ca898] = env->getMethodID(cls, "getCanonicalPath", "()Ljava/lang/String;");
        mids$[mid_getFreeSpace_492808a339bfa35f] = env->getMethodID(cls, "getFreeSpace", "()J");
        mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_11b109bd155ca898] = env->getMethodID(cls, "getParent", "()Ljava/lang/String;");
        mids$[mid_getParentFile_a570d7db18cb9fa8] = env->getMethodID(cls, "getParentFile", "()Ljava/io/File;");
        mids$[mid_getPath_11b109bd155ca898] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getTotalSpace_492808a339bfa35f] = env->getMethodID(cls, "getTotalSpace", "()J");
        mids$[mid_getUsableSpace_492808a339bfa35f] = env->getMethodID(cls, "getUsableSpace", "()J");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isAbsolute_b108b35ef48e27bd] = env->getMethodID(cls, "isAbsolute", "()Z");
        mids$[mid_isDirectory_b108b35ef48e27bd] = env->getMethodID(cls, "isDirectory", "()Z");
        mids$[mid_isFile_b108b35ef48e27bd] = env->getMethodID(cls, "isFile", "()Z");
        mids$[mid_isHidden_b108b35ef48e27bd] = env->getMethodID(cls, "isHidden", "()Z");
        mids$[mid_lastModified_492808a339bfa35f] = env->getMethodID(cls, "lastModified", "()J");
        mids$[mid_length_492808a339bfa35f] = env->getMethodID(cls, "length", "()J");
        mids$[mid_list_692f4257baa8d3c3] = env->getMethodID(cls, "list", "()[Ljava/lang/String;");
        mids$[mid_list_5ccc244df17373d4] = env->getMethodID(cls, "list", "(Ljava/io/FilenameFilter;)[Ljava/lang/String;");
        mids$[mid_listFiles_65428ce8af20de24] = env->getMethodID(cls, "listFiles", "()[Ljava/io/File;");
        mids$[mid_listFiles_622a1703373f06cf] = env->getMethodID(cls, "listFiles", "(Ljava/io/FileFilter;)[Ljava/io/File;");
        mids$[mid_listFiles_efca136e870625ee] = env->getMethodID(cls, "listFiles", "(Ljava/io/FilenameFilter;)[Ljava/io/File;");
        mids$[mid_listRoots_65428ce8af20de24] = env->getStaticMethodID(cls, "listRoots", "()[Ljava/io/File;");
        mids$[mid_mkdir_b108b35ef48e27bd] = env->getMethodID(cls, "mkdir", "()Z");
        mids$[mid_mkdirs_b108b35ef48e27bd] = env->getMethodID(cls, "mkdirs", "()Z");
        mids$[mid_renameTo_473023b97fc9984d] = env->getMethodID(cls, "renameTo", "(Ljava/io/File;)Z");
        mids$[mid_setExecutable_29387014c78e7f59] = env->getMethodID(cls, "setExecutable", "(Z)Z");
        mids$[mid_setExecutable_9e431b345e2a150d] = env->getMethodID(cls, "setExecutable", "(ZZ)Z");
        mids$[mid_setLastModified_31b8f662f1e63743] = env->getMethodID(cls, "setLastModified", "(J)Z");
        mids$[mid_setReadOnly_b108b35ef48e27bd] = env->getMethodID(cls, "setReadOnly", "()Z");
        mids$[mid_setReadable_29387014c78e7f59] = env->getMethodID(cls, "setReadable", "(Z)Z");
        mids$[mid_setReadable_9e431b345e2a150d] = env->getMethodID(cls, "setReadable", "(ZZ)Z");
        mids$[mid_setWritable_29387014c78e7f59] = env->getMethodID(cls, "setWritable", "(Z)Z");
        mids$[mid_setWritable_9e431b345e2a150d] = env->getMethodID(cls, "setWritable", "(ZZ)Z");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toURL_70ba05b0472208bf] = env->getMethodID(cls, "toURL", "()Ljava/net/URL;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        pathSeparator = new ::java::lang::String(env->getStaticObjectField(cls, "pathSeparator", "Ljava/lang/String;"));
        pathSeparatorChar = env->getStaticCharField(cls, "pathSeparatorChar");
        separator = new ::java::lang::String(env->getStaticObjectField(cls, "separator", "Ljava/lang/String;"));
        separatorChar = env->getStaticCharField(cls, "separatorChar");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    File::File(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    File::File(const File & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94ced6352b9e37c8, a0.this$, a1.this$)) {}

    File::File(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

    jboolean File::canExecute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canExecute_b108b35ef48e27bd]);
    }

    jboolean File::canRead() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_b108b35ef48e27bd]);
    }

    jboolean File::canWrite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_canWrite_b108b35ef48e27bd]);
    }

    jint File::compareTo(const File & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_2d89c7a20a7ed0cc], a0.this$);
    }

    jboolean File::createNewFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_createNewFile_b108b35ef48e27bd]);
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_60a5214aca0ff7ec], a0.this$, a1.this$));
    }

    File File::createTempFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const File & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return File(env->callStaticObjectMethod(cls, mids$[mid_createTempFile_d8d960d2f4a3a8b9], a0.this$, a1.this$, a2.this$));
    }

    jboolean File::delete$() const
    {
      return env->callBooleanMethod(this$, mids$[mid_delete_b108b35ef48e27bd]);
    }

    void File::deleteOnExit() const
    {
      env->callVoidMethod(this$, mids$[mid_deleteOnExit_0fa09c18fee449d5]);
    }

    jboolean File::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jboolean File::exists() const
    {
      return env->callBooleanMethod(this$, mids$[mid_exists_b108b35ef48e27bd]);
    }

    File File::getAbsoluteFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getAbsoluteFile_a570d7db18cb9fa8]));
    }

    ::java::lang::String File::getAbsolutePath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAbsolutePath_11b109bd155ca898]));
    }

    File File::getCanonicalFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getCanonicalFile_a570d7db18cb9fa8]));
    }

    ::java::lang::String File::getCanonicalPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalPath_11b109bd155ca898]));
    }

    jlong File::getFreeSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getFreeSpace_492808a339bfa35f]);
    }

    ::java::lang::String File::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
    }

    ::java::lang::String File::getParent() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getParent_11b109bd155ca898]));
    }

    File File::getParentFile() const
    {
      return File(env->callObjectMethod(this$, mids$[mid_getParentFile_a570d7db18cb9fa8]));
    }

    ::java::lang::String File::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_11b109bd155ca898]));
    }

    jlong File::getTotalSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getTotalSpace_492808a339bfa35f]);
    }

    jlong File::getUsableSpace() const
    {
      return env->callLongMethod(this$, mids$[mid_getUsableSpace_492808a339bfa35f]);
    }

    jint File::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean File::isAbsolute() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAbsolute_b108b35ef48e27bd]);
    }

    jboolean File::isDirectory() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDirectory_b108b35ef48e27bd]);
    }

    jboolean File::isFile() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFile_b108b35ef48e27bd]);
    }

    jboolean File::isHidden() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isHidden_b108b35ef48e27bd]);
    }

    jlong File::lastModified() const
    {
      return env->callLongMethod(this$, mids$[mid_lastModified_492808a339bfa35f]);
    }

    jlong File::length() const
    {
      return env->callLongMethod(this$, mids$[mid_length_492808a339bfa35f]);
    }

    JArray< ::java::lang::String > File::list() const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_692f4257baa8d3c3]));
    }

    JArray< ::java::lang::String > File::list(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_list_5ccc244df17373d4], a0.this$));
    }

    JArray< File > File::listFiles() const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_65428ce8af20de24]));
    }

    JArray< File > File::listFiles(const ::java::io::FileFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_622a1703373f06cf], a0.this$));
    }

    JArray< File > File::listFiles(const ::java::io::FilenameFilter & a0) const
    {
      return JArray< File >(env->callObjectMethod(this$, mids$[mid_listFiles_efca136e870625ee], a0.this$));
    }

    JArray< File > File::listRoots()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< File >(env->callStaticObjectMethod(cls, mids$[mid_listRoots_65428ce8af20de24]));
    }

    jboolean File::mkdir() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdir_b108b35ef48e27bd]);
    }

    jboolean File::mkdirs() const
    {
      return env->callBooleanMethod(this$, mids$[mid_mkdirs_b108b35ef48e27bd]);
    }

    jboolean File::renameTo(const File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_renameTo_473023b97fc9984d], a0.this$);
    }

    jboolean File::setExecutable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_29387014c78e7f59], a0);
    }

    jboolean File::setExecutable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setExecutable_9e431b345e2a150d], a0, a1);
    }

    jboolean File::setLastModified(jlong a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setLastModified_31b8f662f1e63743], a0);
    }

    jboolean File::setReadOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadOnly_b108b35ef48e27bd]);
    }

    jboolean File::setReadable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_29387014c78e7f59], a0);
    }

    jboolean File::setReadable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setReadable_9e431b345e2a150d], a0, a1);
    }

    jboolean File::setWritable(jboolean a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_29387014c78e7f59], a0);
    }

    jboolean File::setWritable(jboolean a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_setWritable_9e431b345e2a150d], a0, a1);
    }

    ::java::lang::String File::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::net::URL File::toURL() const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_toURL_70ba05b0472208bf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg);
    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds);
    static PyObject *t_File_canExecute(t_File *self);
    static PyObject *t_File_canRead(t_File *self);
    static PyObject *t_File_canWrite(t_File *self);
    static PyObject *t_File_compareTo(t_File *self, PyObject *arg);
    static PyObject *t_File_createNewFile(t_File *self);
    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args);
    static PyObject *t_File_delete(t_File *self);
    static PyObject *t_File_deleteOnExit(t_File *self);
    static PyObject *t_File_equals(t_File *self, PyObject *args);
    static PyObject *t_File_exists(t_File *self);
    static PyObject *t_File_getAbsoluteFile(t_File *self);
    static PyObject *t_File_getAbsolutePath(t_File *self);
    static PyObject *t_File_getCanonicalFile(t_File *self);
    static PyObject *t_File_getCanonicalPath(t_File *self);
    static PyObject *t_File_getFreeSpace(t_File *self);
    static PyObject *t_File_getName(t_File *self);
    static PyObject *t_File_getParent(t_File *self);
    static PyObject *t_File_getParentFile(t_File *self);
    static PyObject *t_File_getPath(t_File *self);
    static PyObject *t_File_getTotalSpace(t_File *self);
    static PyObject *t_File_getUsableSpace(t_File *self);
    static PyObject *t_File_hashCode(t_File *self, PyObject *args);
    static PyObject *t_File_isAbsolute(t_File *self);
    static PyObject *t_File_isDirectory(t_File *self);
    static PyObject *t_File_isFile(t_File *self);
    static PyObject *t_File_isHidden(t_File *self);
    static PyObject *t_File_lastModified(t_File *self);
    static PyObject *t_File_length(t_File *self);
    static PyObject *t_File_list(t_File *self, PyObject *args);
    static PyObject *t_File_listFiles(t_File *self, PyObject *args);
    static PyObject *t_File_listRoots(PyTypeObject *type);
    static PyObject *t_File_mkdir(t_File *self);
    static PyObject *t_File_mkdirs(t_File *self);
    static PyObject *t_File_renameTo(t_File *self, PyObject *arg);
    static PyObject *t_File_setExecutable(t_File *self, PyObject *args);
    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg);
    static PyObject *t_File_setReadOnly(t_File *self);
    static PyObject *t_File_setReadable(t_File *self, PyObject *args);
    static PyObject *t_File_setWritable(t_File *self, PyObject *args);
    static PyObject *t_File_toString(t_File *self, PyObject *args);
    static PyObject *t_File_toURL(t_File *self);
    static PyObject *t_File_get__absolute(t_File *self, void *data);
    static PyObject *t_File_get__absoluteFile(t_File *self, void *data);
    static PyObject *t_File_get__absolutePath(t_File *self, void *data);
    static PyObject *t_File_get__canonicalFile(t_File *self, void *data);
    static PyObject *t_File_get__canonicalPath(t_File *self, void *data);
    static PyObject *t_File_get__directory(t_File *self, void *data);
    static int t_File_set__executable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__file(t_File *self, void *data);
    static PyObject *t_File_get__freeSpace(t_File *self, void *data);
    static PyObject *t_File_get__hidden(t_File *self, void *data);
    static PyObject *t_File_get__name(t_File *self, void *data);
    static PyObject *t_File_get__parent(t_File *self, void *data);
    static PyObject *t_File_get__parentFile(t_File *self, void *data);
    static PyObject *t_File_get__path(t_File *self, void *data);
    static int t_File_set__readable(t_File *self, PyObject *arg, void *data);
    static PyObject *t_File_get__totalSpace(t_File *self, void *data);
    static PyObject *t_File_get__usableSpace(t_File *self, void *data);
    static int t_File_set__writable(t_File *self, PyObject *arg, void *data);
    static PyGetSetDef t_File__fields_[] = {
      DECLARE_GET_FIELD(t_File, absolute),
      DECLARE_GET_FIELD(t_File, absoluteFile),
      DECLARE_GET_FIELD(t_File, absolutePath),
      DECLARE_GET_FIELD(t_File, canonicalFile),
      DECLARE_GET_FIELD(t_File, canonicalPath),
      DECLARE_GET_FIELD(t_File, directory),
      DECLARE_SET_FIELD(t_File, executable),
      DECLARE_GET_FIELD(t_File, file),
      DECLARE_GET_FIELD(t_File, freeSpace),
      DECLARE_GET_FIELD(t_File, hidden),
      DECLARE_GET_FIELD(t_File, name),
      DECLARE_GET_FIELD(t_File, parent),
      DECLARE_GET_FIELD(t_File, parentFile),
      DECLARE_GET_FIELD(t_File, path),
      DECLARE_SET_FIELD(t_File, readable),
      DECLARE_GET_FIELD(t_File, totalSpace),
      DECLARE_GET_FIELD(t_File, usableSpace),
      DECLARE_SET_FIELD(t_File, writable),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_File__methods_[] = {
      DECLARE_METHOD(t_File, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_File, canExecute, METH_NOARGS),
      DECLARE_METHOD(t_File, canRead, METH_NOARGS),
      DECLARE_METHOD(t_File, canWrite, METH_NOARGS),
      DECLARE_METHOD(t_File, compareTo, METH_O),
      DECLARE_METHOD(t_File, createNewFile, METH_NOARGS),
      DECLARE_METHOD(t_File, createTempFile, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_File, delete, METH_NOARGS),
      DECLARE_METHOD(t_File, deleteOnExit, METH_NOARGS),
      DECLARE_METHOD(t_File, equals, METH_VARARGS),
      DECLARE_METHOD(t_File, exists, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsoluteFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getAbsolutePath, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getCanonicalPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getFreeSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getName, METH_NOARGS),
      DECLARE_METHOD(t_File, getParent, METH_NOARGS),
      DECLARE_METHOD(t_File, getParentFile, METH_NOARGS),
      DECLARE_METHOD(t_File, getPath, METH_NOARGS),
      DECLARE_METHOD(t_File, getTotalSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, getUsableSpace, METH_NOARGS),
      DECLARE_METHOD(t_File, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_File, isAbsolute, METH_NOARGS),
      DECLARE_METHOD(t_File, isDirectory, METH_NOARGS),
      DECLARE_METHOD(t_File, isFile, METH_NOARGS),
      DECLARE_METHOD(t_File, isHidden, METH_NOARGS),
      DECLARE_METHOD(t_File, lastModified, METH_NOARGS),
      DECLARE_METHOD(t_File, length, METH_NOARGS),
      DECLARE_METHOD(t_File, list, METH_VARARGS),
      DECLARE_METHOD(t_File, listFiles, METH_VARARGS),
      DECLARE_METHOD(t_File, listRoots, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_File, mkdir, METH_NOARGS),
      DECLARE_METHOD(t_File, mkdirs, METH_NOARGS),
      DECLARE_METHOD(t_File, renameTo, METH_O),
      DECLARE_METHOD(t_File, setExecutable, METH_VARARGS),
      DECLARE_METHOD(t_File, setLastModified, METH_O),
      DECLARE_METHOD(t_File, setReadOnly, METH_NOARGS),
      DECLARE_METHOD(t_File, setReadable, METH_VARARGS),
      DECLARE_METHOD(t_File, setWritable, METH_VARARGS),
      DECLARE_METHOD(t_File, toString, METH_VARARGS),
      DECLARE_METHOD(t_File, toURL, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(File)[] = {
      { Py_tp_methods, t_File__methods_ },
      { Py_tp_init, (void *) t_File_init_ },
      { Py_tp_getset, t_File__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(File)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(File, t_File, File);

    void t_File::install(PyObject *module)
    {
      installType(&PY_TYPE(File), &PY_TYPE_DEF(File), module, "File", 0);
    }

    void t_File::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "class_", make_descriptor(File::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "wrapfn_", make_descriptor(t_File::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "boxfn_", make_descriptor(boxObject));
      env->getClass(File::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparator", make_descriptor(j2p(*File::pathSeparator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "pathSeparatorChar", make_descriptor(File::pathSeparatorChar));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separator", make_descriptor(j2p(*File::separator)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(File), "separatorChar", make_descriptor(File::separatorChar));
    }

    static PyObject *t_File_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, File::initializeClass, 1)))
        return NULL;
      return t_File::wrap_Object(File(((t_File *) arg)->object.this$));
    }
    static PyObject *t_File_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, File::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_File_init_(t_File *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = File(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ks", File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = File(a0, a1));
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

    static PyObject *t_File_canExecute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canExecute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canRead(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canRead());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_canWrite(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.canWrite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_compareTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_File_createNewFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.createNewFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_createTempFile(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1));
            return t_File::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          File a2((jobject) NULL);
          File result((jobject) NULL);

          if (!parseArgs(args, "ssk", File::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::io::File::createTempFile(a0, a1, a2));
            return t_File::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "createTempFile", args);
      return NULL;
    }

    static PyObject *t_File_delete(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.delete$());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_deleteOnExit(t_File *self)
    {
      OBJ_CALL(self->object.deleteOnExit());
      Py_RETURN_NONE;
    }

    static PyObject *t_File_equals(t_File *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_File_exists(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.exists());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_getAbsoluteFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsoluteFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getAbsolutePath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAbsolutePath());
      return j2p(result);
    }

    static PyObject *t_File_getCanonicalFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getCanonicalPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalPath());
      return j2p(result);
    }

    static PyObject *t_File_getFreeSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getName(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_File_getParent(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return j2p(result);
    }

    static PyObject *t_File_getParentFile(t_File *self)
    {
      File result((jobject) NULL);
      OBJ_CALL(result = self->object.getParentFile());
      return t_File::wrap_Object(result);
    }

    static PyObject *t_File_getPath(t_File *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_File_getTotalSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_getUsableSpace(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_hashCode(t_File *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_File_isAbsolute(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAbsolute());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isDirectory(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDirectory());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isFile(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFile());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_isHidden(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isHidden());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_lastModified(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.lastModified());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_length(t_File *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_File_list(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.list());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.list(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_File_listFiles(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< File > result((jobject) NULL);
          OBJ_CALL(result = self->object.listFiles());
          return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
        }
        break;
       case 1:
        {
          ::java::io::FileFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
        {
          ::java::io::FilenameFilter a0((jobject) NULL);
          JArray< File > result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FilenameFilter::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.listFiles(a0));
            return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listFiles", args);
      return NULL;
    }

    static PyObject *t_File_listRoots(PyTypeObject *type)
    {
      JArray< File > result((jobject) NULL);
      OBJ_CALL(result = ::java::io::File::listRoots());
      return JArray<jobject>(result.this$).wrap(t_File::wrap_jobject);
    }

    static PyObject *t_File_mkdir(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdir());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_mkdirs(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.mkdirs());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_renameTo(t_File *self, PyObject *arg)
    {
      File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.renameTo(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "renameTo", arg);
      return NULL;
    }

    static PyObject *t_File_setExecutable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setExecutable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setExecutable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setExecutable", args);
      return NULL;
    }

    static PyObject *t_File_setLastModified(t_File *self, PyObject *arg)
    {
      jlong a0;
      jboolean result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.setLastModified(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setLastModified", arg);
      return NULL;
    }

    static PyObject *t_File_setReadOnly(t_File *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.setReadOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_File_setReadable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setReadable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setReadable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setReadable", args);
      return NULL;
    }

    static PyObject *t_File_setWritable(t_File *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jboolean a0;
          jboolean result;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setWritable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "ZZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.setWritable(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "setWritable", args);
      return NULL;
    }

    static PyObject *t_File_toString(t_File *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(File), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_File_toURL(t_File *self)
    {
      ::java::net::URL result((jobject) NULL);
      OBJ_CALL(result = self->object.toURL());
      return ::java::net::t_URL::wrap_Object(result);
    }

    static PyObject *t_File_get__absolute(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAbsolute());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__absoluteFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsoluteFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__absolutePath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAbsolutePath());
      return j2p(value);
    }

    static PyObject *t_File_get__canonicalFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__canonicalPath(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalPath());
      return j2p(value);
    }

    static PyObject *t_File_get__directory(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDirectory());
      Py_RETURN_BOOL(value);
    }

    static int t_File_set__executable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setExecutable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "executable", arg);
      return -1;
    }

    static PyObject *t_File_get__file(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFile());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__freeSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getFreeSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__hidden(t_File *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isHidden());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_File_get__name(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_File_get__parent(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return j2p(value);
    }

    static PyObject *t_File_get__parentFile(t_File *self, void *data)
    {
      File value((jobject) NULL);
      OBJ_CALL(value = self->object.getParentFile());
      return t_File::wrap_Object(value);
    }

    static PyObject *t_File_get__path(t_File *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static int t_File_set__readable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setReadable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "readable", arg);
      return -1;
    }

    static PyObject *t_File_get__totalSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTotalSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static PyObject *t_File_get__usableSpace(t_File *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getUsableSpace());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }

    static int t_File_set__writable(t_File *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setWritable(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "writable", arg);
      return -1;
    }
  }
}
